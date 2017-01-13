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
int main(){

int a[300]={0};
int m=MAX;

	string s;
	cin >> s;
	ll countB=0;
	for(i=0;i<n;i++){
		
		if(s[i]=='B'){
			countB++;
		}else{
			a[s[i]]++;
		}
	}

	m=min(m,(int)countB);
	m=min(m,(int)(a['a']/2));
	m=min(m,a['b']);
	m=min(m,(int)(a['u']/2));
	m=min(m,a['r']);
	m=min(m,a['s']);
	m=min(m,a['l']);
	
	cout << m << endl;

return 0;	
}
