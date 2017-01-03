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
std::vector<int> v;
int main(){
int a[27];
string s;
	for (i = 0; i < 26; ++i)
	{
		cin >> a[i];
	}

	cin >> s ;

	for(i=0;i<s.length();i++){
		v.pb(a[s[i]-97]);
	}

	sort(v.begin(),v.end());

	ll res=v[v.size()-1]*(s.length());

	cout <<  res << endl;


return 0;	
}
