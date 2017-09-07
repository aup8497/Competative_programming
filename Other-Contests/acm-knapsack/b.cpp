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
const int MAX=5e5+5;
using namespace std;

// ll n,m,i,j,k;

ll findWater(ll arr[], ll n)
{
    ll left[n];
 
    ll right[n];
 
    ll water = 0;
 
    left[0] = arr[0];
    for (ll i = 1; i < n; i++)
       left[i] = max(left[i-1], arr[i]);
 
    right[n-1] = arr[n-1];
    for (ll i = n-2; i >= 0; i--)
       right[i] = max(right[i+1], arr[i]);
 
    for (ll i = 0; i < n-1; i++)
       water += min(left[i],right[i+1]) ;
 
    return water;
}

ll a[MAX]={0};
int main(){
	ll n;
	cin >> n ;

	for(ll i=0;i<n;i++){
		cin >> a[i];
	}

	cout << findWater(a,n) << endl;

return 0;	
}
