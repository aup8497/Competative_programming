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
ll x1,x2,y1,y2,z1,z2;
	int t,T;
	cin >> T;

	for(t=0;t<T;t++){
		cin >> x1 >> y1 >> z1;
		cin >> x2 >> y2 >> z2;

		if( ( x1*3600 + y1*60 + z1 ) == (x2*3600+y2*60+z2)){
			printf("Case %d: Yes\n",t+1);
		}else{
			printf("Case %d: No\n",t+1);
		}

	}

return 0;	
}
