#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m,i,j,k;
ll dp[6000]={0};

ll compute(string s){
	memset(dp,0,6000);
	dp[0]=1;

	for(i=1;i<s.length();i++){
		if( s[i]-'0')
			dp[i]=dp[i-1];

		if( (10*(s[i-1]-'0')+s[i]-'0'<=26) &&  (10*(s[i-1]-'0')+s[i]-'0'>=10) )
			dp[i]+=dp[ (i!=1)? i-2 : 0 ];
	}

	cout << dp[s.length()-1] << endl;
}

string s;
int main(){

	while(1){
		cin >> s;
		if(s=="0")
			break;
		compute(s);
	}

return 0;	
}