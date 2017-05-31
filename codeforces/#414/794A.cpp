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
	ll a,x,b,c;
	cin >> a >> b >> c;
	cin >> n ;
	ll cnt=0;
	for(i=0;i<n;i++){	
		cin >> x ;
		if(x>b && x<c )
			cnt++;
	}
	
	cout << cnt << endl ;


return 0;	
}
