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
		cin >> n;
		ll sum1=0,sum2=0;
		for ( i = 0; i < n; ++i)
		{
			cin >> k;
			if(i%2==0){
				sum1+=k;
			}else
				sum2+=k;
		}
		for (i = 0; i < n; ++i)
		{
			cin >> k;
			if(i%2==0){
				sum2+=k;
			}else
				sum1+=k;	
		}

		cout << min(sum2,sum1) << endl;

	}


return 0;	
}
