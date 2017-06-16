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

ll n,i,j,k;
int m[300];
std::vector<pair<char,char> > v;
int main(){
string a,b;
	cin >> a >> b ;

	for(i=0;i<a.length();i++){
		if(a[i]==b[i]){
			if(m[a[i]] && m[a[i]]!=a[i]){
				cout << -1 << endl;
				exit(0);
			}
			m[a[i]]=a[i];
			continue;
			
		}
		else if(!m[a[i]] && !m[b[i]]){
			m[a[i]]=b[i];
			m[b[i]]=a[i];
			v.pb(mp(a[i],b[i]));
		}else{
			if(m[a[i]]!=b[i]){
				cout << -1 << endl;
				exit(0);
			}
			if(m[b[i]]!=a[i]){
				cout << -1 << endl;
				exit(0);
			}
		}

	}

	cout << v.size() << endl;
	for(i=0;i<v.size();i++)
		cout << v[i].first << " " << v[i].second <<endl;
return 0;	
}

