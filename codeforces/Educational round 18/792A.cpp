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

ll n,m,i,j,k,dis,mindis,num=0;

int main(){

	cin >> n ;
	ll a[n];	
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	
	mindis=2*MOD;

	sort(a,a+n);

	for ( i = 0; i < n-1; ++i)
	{

		if(a[i+1]-a[i] == mindis){
			num++;
		}

		if(a[i+1]-a[i] < mindis){
			mindis=(a[i+1]-a[i]);
			num=1;
		}
	}

	cout << mindis << " " << num;


return 0;	
}
