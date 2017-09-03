// 2.cpp

#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,i,j,k,x;
std::vector<int> v;
std::unordered_map<char, int> m;
unordered_set<char> st;
string s;
string res;
int a[300]={0};

int main(){

	cin >> s;
	cin >> k;
	int n=s.length();
	
	for(i=0;i<n;i++){
		m[s[i]]++;
		if(m[s[i]]>=k)
			a[s[i]]=1;
			// st.insert(s[i]);
	}

	res="";
	for(i=0;i<n;i++){
		if(a[s[i]])
			res+=s[i];
	}

	cout << res << endl;


return 0;	
}