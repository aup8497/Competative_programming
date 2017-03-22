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

ll n,m,k,i;

bool cmp(const pair<int,int> &a,const pair<int,int> &b){
	return a.second < b.second;
}

int main(){

	std::vector< pair<int,int> > v;
	std::vector<int> v0;
	cin >> n >> k ;

	int a[n],b[n];

	for ( i = 0; i < n; ++i)
	{
		cin >> a[i];
	}	

	for ( i = 0; i < n; ++i)
	{
		cin >> b[i];
	}

	for (i = 0; i < n; ++i)
	{
		if(a[i] > b[i])
			v.pb(mp(i,a[i]-b[i]));
		else
			v0.pb(a[i]);
	}

	int n0=v0.size();
	int rem=n-n0;

	int sum=0;
	if(k<=n0){
		for(i=0;i<n;i++){
			sum+=min(a[i],b[i]);
			// cout << "1 selecting " << min(a[i],b[i]) << endl;
		}
	}
	else{
		sort(v.begin(),v.end(),cmp);

		// cout << "sorted v :\n" ;

		// for(i=0;i<v.size();i++){
		// 	cout << v[i].first << endl;
		// }

		for(i=0;i<n0;i++){
			sum+=v0[i];
			// cout << "1selecting " << v0[i] << endl;
		}

		for(i=0;i<rem;i++){
			if(i+n0<k){
				sum+=max(a[v[i].first],b[v[i].first]);
			// cout << "2selecting " << max(a[v[i].first],b[v[i].first])<< endl;
			}else{
				sum+=min(a[v[i].first],b[v[i].first]);
			// cout << "3selecting " << min(a[v[i].first],b[v[i].first]) << endl;
			}
		}
	}
	cout << sum << endl;



return 0;	
}
