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
	int t,x;
	cin >> t;

	while(t--){
		cin >> n >> x;
		int a[n],mn=1000,sum=0;
		
		for(i=0;i<n;i++){
			cin >> a[i];
			mn=min(mn,a[i]);
			sum+=a[i];
		}

		if((sum%x)>=mn)
			cout << "-1" << endl;
		else
			cout << (sum/x) << endl;


	}

return 0;	
}