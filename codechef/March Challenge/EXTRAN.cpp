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
	ll t;
	cin >> t;

	while(t--){

		cin >> n ;
		ll a[n];
		for (i = 0; i < n; ++i)
		cin >> a[i];

		sort(a,a+n);
		int pos=0;
		for (i = 0; i < n-1; ++i)
		{
			if(i==n-2){
				pos=n-1;
				break;
			}
			if(a[i] != (a[i+1]-1)){
				pos=i;
				break;
			}

		}

		cout << a[pos] << endl;
	}	


return 0;	
}