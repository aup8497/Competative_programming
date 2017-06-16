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

	cin >> n >> m >> k ;

	printf("%lld %lld ",((k-1)/(2*m) +1),((k-1)%(2*m) /2 +1) );		
	printf("%c ", (k%2==0)?'R':'L' );

return 0;	
}
