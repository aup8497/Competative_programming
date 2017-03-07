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
		int a,b,res;
		cin >> a >> b ;

		if( (a<=6) && (b<=6) ){
			res=2*min(a,b);
		}else if((a>6) && (b>6)){
			res=min(a,b)+(min(a,b)-6) ;
		}else{
			if(a<b){
				res=min(2*a, 2*b-6 );
			}else{
				res=min( 2*b, 2*a-6 );
			}
		}
		cout << res << endl;
	}
	

	


return 0;	
}
