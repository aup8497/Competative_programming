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

	int t;
	cin >> t;
	while(t--){	
		cin >> n ;
		int flag=0,a[n];
		int sum=0;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			sum+=a[i];
			if(a[i]<=1)
				flag=1;
		}

		sort(a,a+n);

		if(flag==1)
			cout << "-1" << endl;
		else if(n==1)
			cout << "2" << endl;
		else
			cout << sum-a[0]+2 << endl;
	}


return 0;	
}
