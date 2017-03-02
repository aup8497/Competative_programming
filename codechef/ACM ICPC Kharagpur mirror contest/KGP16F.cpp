//this code is incomplete

#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
//#include <unordered_map>
const int MAX=1e5+5;
#define ll long long
#define pb push_back

using namespace std;

ll maxo=0,mino=MAX;

   ll intervalmax[MAX][MAX];
    ll memo[MAX/2][MAX];
    //Set up O(1) lookup for max in interval (i, j).
    //Initialize memo table
    void preprocess(vector<ll> a,ll n,ll m)
    {
        ll i, j;
        for(i=0; i<n-1; i++)
        {
            intervalmax[i][i+1]=a[i+1]-a[i];
            for(j=i+2; j<n; j++)
            {
                intervalmax[i][j]=a[j]-a[i];
            }
        }
        for(i=1; i<=m; i++)
        {
            for(j=0; j<n; j++)
            {
                memo[i][j]=-1;
            }
        }
    }
    //a is the array, n is the size of the list, m is the number of partitions to be made
    ll solution(vector<ll> a, ll i, ll n, ll m)
    {
        if(memo[m][i]!=-1)
            return memo[m][i];
        if(m==1)
        {
            memo[m][i]=intervalmax[i][n-1];
            return memo[m][i];
        }
        ll minresult=MAX;
        for(int k=i; k<=n-m; k++)
        {
            minresult=min(minresult, intervalmax[i][k]+solution(a, k+1, n, m-1));
        }
        memo[m][i]=minresult;
        return memo[m][i];
    }


int main(){
 	

 	ll n,k,gap[MAX];
 	std::vector<ll> a;
 	//unordered_map<int,int> m;
 	// ll gap[2][MAX];
	cin >> n >> k;

	for(ll i=0;i<n;i++){
		ll x;
		cin >> x;
		a.pb(x);
		if(x>maxo)
			maxo=x;
		if(x<mino)
			mino=x;
	}
	sort(a.begin(),a.end());

	// for(ll i=0;i<n-1;i++){
	// 	gap[i]=a[i+1]-a[i];
	// 	m[gap[i]]=i;
	// 	//gap[i]=i;
	// }
	// sort(gap,gap+n-1);

	// for(int i=0;i<n-1;i++){
	// 	cout << gap[i] << " " << "i=";
	// 	cout << m[gap[i]] << " ";
	// }
	preprocess(a,n,k);

	solution(a,0,n,k);

	
}


 