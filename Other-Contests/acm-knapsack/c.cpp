//https://www.hackerrank.com/contests/acm-knapsack-2017/challenges

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

ll n,m,i,j,k,l,r,q;
ll a[MAX],prefix[MAX];
ll newans[MAX]={0};
template <typename T1, typename T2>
struct less_second {
    typedef pair<T1, T2> type;
    bool operator ()(type const& a, type const& b) const {
        return a.second < b.second;
    }
};

ll p[MAX][2];
int main(){

	cin >> n >> q ;

	for(i=0;i<n;i++){
		cin >> a[i];
	}

	vector<pair<ll,ll> > vec;
	for(i=0;i<n;i++){
		vec.pb(mp(i,0));
	}

	for(i=0;i<q;i++){

		cin >> l >> r ;
		p[i][0]=l;
		p[i][1]=r;

		for(j=l;j<=r;j++){
			// vec[j].first=j;
			vec[j-1].second++;
		}
	}

	sort(vec.begin(), vec.end(), less_second<ll, ll>());
	reverse(vec.begin(),vec.end());
	sort(a,a+n);
	reverse(a,a+n);
	// ll sum=0;
	// for(i=n-1;i>=0;i--){
	// 	sum+=(a[i]*vec[i].second) ;
	// }
	
	for(i=0;i<n;i++){
		newans[vec[i].first]=a[i];
	}

	// for(i=0;i<n;i++){
	// 	cout << newans[i] << " " ;
	// }	

	// cout << "done";


	for(i=0;i<q;i++){
		ll sum=0;
		for(j=p[i][0];j<=p[i][1];j++){
			sum+=newans[j-1];
		}

		cout << sum << endl;
	}



return 0;	
}
