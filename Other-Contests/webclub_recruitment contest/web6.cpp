#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m,i,j,k,x,y,res=0,sum=0;

// ll power(ll a, ll b, ll mod){
// 	ll x = 1, y = a;
// 	while (b > 0){
// 		if (b%2){
// 			x = (x*y)%mod;
// 		}
// 		y = (y*y)%mod;
// 		b /= 2;
// 	}
// 	return x%mod;
// }	
 
// ll modular_inverse(ll n, ll mod){
// 	return power(n, mod-2, mod);
// }
 
// ll nCr(ll n, ll k, ll mod){
// 	return factorial[n]*((modular_inverse(factorial[k]*modular_inverse(factorial[n-k]))%mod))%mod;
// }
 
int countFact(int n, int p)
{
    int k=0;
    while (n>=p)
    {
        k+=n/p;
        n/=p;
    }
    return k;
}
 
/* This function calculates (a^b)%MOD */
long long pow(int a, int b, int MOD)
{
    long long x=1,y=a; 
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>MOD) x%=MOD;
        }
        y = (y*y);
        if(y>MOD) y%=MOD; 
        b /= 2;
    }
    return x;
}
 
/*  Modular Multiplicative Inverse
    Using Euler's Theorem
    a^(phi(m)) = 1 (mod m)
    a^(-1) = a^(m-2) (mod m) */
long long InverseEuler(int n, int MOD)
{
    return pow(n,MOD-2,MOD);
}
 
long long factMOD(int n, int MOD)
{
    long long res = 1; 
    while (n > 0)
    {
        for (int i=2, m=n%MOD; i<=m; i++)
            res = (res * i) % MOD;
        if ((n/=MOD)%2 > 0) 
            res = MOD - res;
    }
    return res;
}
 
long long C(int n, int r, int MOD)
{
    if (countFact(n, MOD) > countFact(r, MOD) + countFact(n-r, MOD))
        return 0;
 
    return (factMOD(n, MOD) *
            ((InverseEuler(factMOD(r, MOD), MOD) * 
            InverseEuler(factMOD(n-r, MOD), MOD)) % MOD)) % MOD;
}

// long long pow(int a, int b, int MOD)
// {
//     long long x=1,y=a; 
//     while(b > 0)
//     {
//         if(b%2 == 1)
//         {
//             x=(x*y);
//             if(x>MOD) x%=MOD;
//         }
//         y = (y*y);
//         if(y>MOD) y%=MOD; 
//         b /= 2;
//     }
//     return x;
// }

// long long InverseEuler(int n, int MOD)
// {
//     return pow(n,MOD-2,MOD);
// }

// long long C(int n, int r, int MOD)
// {
//     vector<long long> f(n + 1,1);
//     for (int i=2; i<=n;i++)
//         f[i]= (f[i-1]*i) % MOD;
//     return (f[n]*((InverseEuler(f[r], MOD) * InverseEuler(f[n-r], MOD)) % MOD)) % MOD;
// }

int main(){

	cin >> n >> m >> x >> y;
	cout << C(x+y-2,x-1,1000000007) << endl;

return 0;	
}