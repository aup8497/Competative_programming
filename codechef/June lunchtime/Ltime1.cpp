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

		cin >> i >> j >> n ;

		if(n%2==0)
			cout << max(i,j)/min(i,j) << endl;
		else
			cout << max(2*i,j)/min(2*i,j) << endl;
	}	


return 0;	
}