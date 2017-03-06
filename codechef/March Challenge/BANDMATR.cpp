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
	ll t,x,res	;
	cin >> t;

	while(t--){

		cin >> n ;
		ll sum=0;
		for (i = 0; i < n; ++i)
			for (j = 0; j < n; ++j)
			{
				cin >> x;
				if(x==0)
					sum+=1;
			}

		for (i = 1; i <= n; ++i)
		{
			if( sum < (2*i*(i+1)/2) ){
				res=n-i;
				break;
			}
		}
			
			cout << res << endl;
	}	


return 0;	
}