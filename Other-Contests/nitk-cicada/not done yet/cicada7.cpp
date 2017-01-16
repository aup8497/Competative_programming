//demonitization
//still to complete
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
const int MAX=1e6+5;
using namespace std;

ll n,m,i,j,k,x,y;
ll a[MAX];
ll v[MAX]={0};
int main(){

	cin >> n >> m;

	for(i=0;i<n;i++){
		cin >> a[i];
	}

	sort(a,a+n);

	// for(i=0;i<n;i++){
	// 	cout << a[i];
	// }

	ll index=1;
	v[index]=0;
	for(i=1;i<n;i++){
		if(a[i]!=a[i-1]){
			index=index+1;
			v[index]=i;
		}
	}

	for(i=index+1;i<=n;i++){
		v[i]=n;
	}

	// for(i=0;i<n;i++){
	// 	cout << v[i] << " ";
	// }


	for(i=0;i<m;i++){
		cin >> x >> y;
		cout << v[y+1]-v[x] << endl;
	}

return 0;	
}
