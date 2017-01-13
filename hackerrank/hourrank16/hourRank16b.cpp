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
	cin >> t ;

	while(t--){
		cin >> n;

		if(n==1 || n==2 || n==3 ||n==5 ||n==6 ||n==9 || n==10 ||n==13 || n==17)
			cout << "NO" << endl;
		else
			cout << "YES" << endl ;
	}


return 0;	
}
