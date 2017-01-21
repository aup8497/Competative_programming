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

ll n,m,i,j,k,num;

int main(){

	ll t;
	cin >> t;
	while(t--){

		k=0;
		cin >> n ;
		num = n ;
		while(n){
			n=n/2;
			k++;
		}
		// cout << k << endl;

		cout << (pow(2,k)-num-1) << endl;

	}
return 0;	
}
