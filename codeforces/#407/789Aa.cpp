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
// int a[100005];
int main(){
	ll x;
	cin >> n >> k ;
	ll sum=0;
	for(i=0;i<n;i++){
		cin >> x;
		sum+=((x+k-1)/k);
	}
	cout << ((sum+1)/2) << endl;


return 0;	
}
