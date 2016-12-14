#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

long long dp[100005];

long long power(long long N, long long expo)
{
    long long ans = 1;
cout << "came inside power with n="<< N<< "  and expo ="<< expo<< endl;    
    while(expo)
    {
cout << "came inside while with expo ="<< expo<< endl;    

        if(expo%2)
            ans = ans*N%MOD;
cout << "ans ="<< ans<< endl;    
        
        N = N*N%MOD;
        expo/= 2;
    }
    
    return ans;
}

int main(){
    int n;
    cin >> n;
    
    dp[2] = 2;
    
    for(int i=3; i<=3; i++)
        dp[i] = dp[i-1]*i%MOD*i%MOD*power(i-1, MOD-2)%MOD;
    
    cout << dp[n] << endl;
    
    return 0;
}
