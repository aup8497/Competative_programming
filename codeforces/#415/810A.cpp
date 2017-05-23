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

ll n,m,i,j,x,k,sum=0,res;

int main(){

	cin >> n >> k ;
	sum=0;
	for(i=0;i<n;i++){
		cin >> x;
		sum+=x;
	}

	res=(2*n*k) - n - (2 * sum);

	if(res>0)
		cout << res << endl;
	else
		cout << 0 << endl;
return 0;	
}
