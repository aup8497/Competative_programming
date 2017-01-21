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

template <typename T1, typename T2>
struct less_second {
    typedef pair<T1, T2> type;
    bool operator ()(type const& a, type const& b) const {
        return a.second < b.second;
    }
};


int main(){


	vector<pair<int,int> > vec;

	vec.pb(mp(1,5));
	vec.pb(mp(2,8));
	vec.pb(mp(3,3));

	sort(vec.begin(), vec.end(), less_second<int, int>());
	
	// cout << vec[0].first << vec[0].second ;

	for(i=0;i<3;i++)
		cout << vec[i].first << endl;


return 0;	
}
