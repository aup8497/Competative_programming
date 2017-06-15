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
	ll t;
	cin >> t;

	while(t--){
		int flag=0;
		cin >> n ;
		int a[n+5];
		
		if(n%2==0)
			flag=1;
		for(i=1;i<=n;i++){
			cin >> a[i];
			if( i <= ((n+1)/2) ){
				if(a[i]!=i)
					flag=1;
			}else{
				if( a[i]!=n-i+1 )
					flag=1;
			}
		}

		if(flag==0)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}	


return 0;	
}