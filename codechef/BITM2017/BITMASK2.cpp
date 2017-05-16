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

	int t;
	cin >> t;
	while(t--){
		ll res=0;
		cin >> n ;
		int a[n],b[n];

		for(i=0;i<n;i++)
			cin >> a[i];
		
		for(i=0;i<n;i++)
			cin  >> b[i];

		sort(a,a+n);
		sort(b,b+n);
		reverse(b,b+n);

		for(i=0;i<n;i++){
			res+=a[i]*b[i];
		}

		cout << res << endl;

	}

return 0;	
}
