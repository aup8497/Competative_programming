#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

#define pb push_back
#define mp make_pair
#define ll long long
#define MOD 1000000007
const int MAX=1e5+5;
using namespace std;

ll n,m,i,j,k;

int main(){
int t;
	cin >> t;

	while(t--){
		ll a,b,c;
		string s1,s2;
		int cnt1[26]={0};
		cin >> a >> b >> c ;
		cin >> s1 >> s2;

		ll mn=min(a+b,c);

		n=s1.length();

		for(i=0;i<n;i++){
			cnt1[s1[i]-'a']++;
		}
		
		for(i=0;i<n;i++){
			cnt1[s2[i]-'a']--;
		}

		int sum=0;
		for(i=0;i<26;i++){
			// cout << cnt1[i] <<" ";   
			sum+=abs(cnt1[i]);
		}
		// cout << "sum is " << sum;
		sum/=2;

		ll res=sum*mn;

		cout << res << endl;

	}

return 0;	
}
