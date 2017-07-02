// zz4.cpp

#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
#define MOD 1000000007
using namespace std;

ll n,m,i,j,t,l,r,k,x,tt,res=0,sum=0;

ll foo(int n){
	ll i;
	// int z=power(x,p/2);
	if(n<=1)
		return 0;
	if(n%2==0){
		return (n>>1)+foo(n>>1)%MOD;
	}
	else{
		for (int i = 3; i <= sqrt(n); i = i+2)
	    {
	    	if(n%i==0){
	    		ll z=n/i;
	    		return ((i*(i-1)/2)%MOD*z%MOD+foo(i))%MOD;
	    		break;
	    	}
	    }
	    return (n*(n-1)/2)%MOD;
	}

}

int main(){
int i;
	cin >> t >> l >> r;
	tt=1;
	for(i=l;i<=r;i++){
		// cout << "foo=" << foo(i) << endl;
		res=(res+(tt*foo(i)%MOD))%MOD;
		tt*=t%MOD;
	}

	cout << res%MOD << endl;

return 0;	
}