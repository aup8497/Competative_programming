//completed
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

int main(){
	int x,z;
	cin >> n ;
    std::vector<int> v[n+1];
	for (i = 0; i < n-1; ++i)
	{
		cin >> z >> x;
		v[z-1].pb(x-1);
		v[x-1].pb(z-1);
	}
	int res=0;
	for (i = 0; i < n ; ++i)
	{
		res=max(res,(int) v[i].size());
	}

	cout << res+1 << endl;
return 0;	
}
