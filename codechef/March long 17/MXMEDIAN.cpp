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
int a[MAX],b[MAX];

int main(){
	int t;
	cin >> t;

	while(t--){
	cin >> n;
	for(i=0;i<(2*n);i++)
		cin >> a[i];

	sort(a,a+(2*n));

	// cout << "conternts of array a is \n";
	// for(i=0;i<2*n;i++)
	// 	cout << a[i] << " " ;
	// cout << endl;

	for(i=0;i<n;i++){
		b[2*i]=a[i];
		b[(2*i)+1]=a[n+i];
	}

	cout << a[n+(n/2)] << endl;
	for(i=0;i<2*n;i++)
		cout << b[i] << " " ;

	cout << endl;
	}
	



return 0;	
}
