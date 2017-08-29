#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;

int main(){

	int t;
	cin >> t;
	while(t--){
		int p,n;
		string s;
		cin >> p;
		cin >> s;
		n=s.length();

		int flag=0;
		for(i=n-1;i>=0;i--){
			if(i==0 && s[i]>='a'+p){
				cout << -1 << endl;
				flag=1;
				break;
			}
			if(s[i]>='a'+p){
				s[i]='a';
				continue;
			}
			s[i]=s[i]+1;
			break;
		}
		if(flag==1)
			continue;

		cout << s << endl; 

	}


return 0;	
}