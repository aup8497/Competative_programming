#include <stdio.h>
#include <iostream>
#include <string.h>
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
	ll t;
	cin >> t;
	while(t--){
		char a[MAX];
		cin >> a;
		ll res=0;
		j=0;
		for ( i = 0; i < strlen(a)-1; ++i)
		{
			if(a[i]==a[i+1]){
				res++;
			}
		}

		cout << res<< endl;
	}

	


return 0;	
}
