#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;
std::vector<pair<int,int> > v;

int main(){

	ll mx=0;
	string s;
	cin >> n >> k ;
	cin >> s;
	std::map<char, int> m1,m2;

	for(i=0;i<n;i++){
		if(m1[s[i]]==0){
			m1[s[i]]++;
			v.push_back(make_pair(i,0));
		}
	}

	for(i=n-1;i>=0;i--){
		if(m2[s[i]]==0){
			m2[s[i]]++;
			v.push_back(make_pair(i,1));
		}
	}

	sort(v.begin(), v.end());

	for(i=0;i<v.size();i++){
		if(v[i].second==0)
			res++;
		else
			res--;

		mx=max(res,mx);
	}

	if(mx<=k)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;


return 0;	
}