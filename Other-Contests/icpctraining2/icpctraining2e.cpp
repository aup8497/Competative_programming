#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>

#define pb push_back
#define mp make_pair
#define ll long long
#define MOD 1000000007
const int MAX=2e5+5;
using namespace std;

ll n,m,i,j,k;
ll pos[MAX],a[MAX];

int main(){

	ll diff=MOD,finaldiff=MOD;
	cin >> n ;
	map<ll,ll> m;
	// memset(pos,-1,sizeof pos);

	for(i=0;i<n;i++){
		cin >> a[i] ;
		if(m.count(a[i])==0)
			m[a[i]]=i;
	}

	sort(a,a+n);


	
	for(i=0;i<n-1;i++){
		
		if((a[i+1]-a[i]) !=0)
			diff=(a[i+1]-a[i]);

		if(finaldiff > diff  && m[a[i+1]]<m[a[i]] ){
			finaldiff=diff;
		}
	}


	cout << finaldiff <<endl;


return 0;	
}