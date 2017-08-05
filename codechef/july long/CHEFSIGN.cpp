#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

int main(){
	ll t,i,n;
	cin >> t;
	while(t--){
		string s;
		cin >> s;

		n=s.length();
		ll res=0,mx=0,mn=0;

		for(i=0;i<n;i++){

			if(s[i]=='<')
				res++;
			else if(s[i]=='>')
				res--;

			mx=max(res,mx);
			mn=min(res,mn);
		}

		cout << mx-mn+1 << endl;
	}

return 0;	
}