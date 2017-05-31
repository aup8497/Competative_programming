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

ll n,m,i,j,k,h;

int main(){
	long double x,areaOfEachPart;
	cin >> n >> h ;
	areaOfEachPart= (long double)h / (long double)(2*n) ;

	cout.precision(13);
	// cout << (double)areaOfEachPart ;

	for(i=1;i<n;i++){

		x=sqrt((long double)areaOfEachPart*i*2*h + 0.0000000001);

		cout << x << " ";
	}
	
	// cout << sqrtl(3);


return 0;	
}

