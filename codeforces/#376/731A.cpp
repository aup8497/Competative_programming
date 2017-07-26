#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;
// int a[MAX],b[MAX];
// std::vector<int> v;

int main(){

	string s;
	cin >> s;
	int n=s.length();
	int sum=0;
	for(i=0;i<n-1;i++){
		int x=min(min(abs(s[i]-s[i+1]),abs(s[i]-s[i+1]+26)),abs(s[i]-s[i+1]-26));
		sum+=x;
		// cout << x << " ";
	}

	int x=min(min(abs(s[0]-'a'),abs(s[0]-'a'+26)),abs(s[0]-'a'-26));
	sum+=x;
	// cout << x << " ";

	cout << sum << endl;

return 0;	
}