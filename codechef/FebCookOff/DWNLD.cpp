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

		int t,d,flag=0;
		ll total=0;
			cin >> n >> k ;

			for(i=0;i<n;i++){
				cin >> t >> d;
				
				if(k-t>=0 ){
					k=k-t;
				}else if(flag==0){
					t=t-k;
					flag=1;
				}

				if(flag==1){
					total+=(t*d);
				}

			}
			cout << total << endl;	

	}

return 0;	
}