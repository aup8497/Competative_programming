//flippingTheMatrix.cpp
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


int main(){
	ll t;
	cin >> t ;

	while(t--){
	
	ll n,i,j,res;
	cin >> n;
	ll a[2*n][2*n];

	for(i=0;i<2*n;i++)
		for(j=0;j<2*n;j++)
			cin >> a[i][j];

	res=0;	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			res+=max(max(a[i][j],a[i][2*n-1-j]),max(a[2*n-1-i][j],a[2*n-1-i][2*n-1-j]));
		}
	cout << res << endl; 

	}

return 0;	
}
