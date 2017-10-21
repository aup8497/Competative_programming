#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;

int main(){
	ll a,b;
	cin >> a >> b;

	if(b-a>5)
		cout << 0 << endl;
	else{
		int dig=1;
		// cout << "came " << endl;
		// cout << b-a << " " << b << endl;
		for(ll i=b;i>a;i--){
			// cout << "came " << endl;
			// cout << i << endl;
			if(i==0)
				i=1;
			dig=dig*(i%10)%10;
		}
		cout << dig << endl;
	}

return 0;	
}