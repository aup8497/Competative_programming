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
int t,x,y,p,q,x_next,x1_next,y_next,y1_next,a,b;
	cin >> t;

	while(t--){
		cin >> x >> y >> p >> q;

		x_next=x+(p-(x%p));
		y_next=(x_next/p)*q;
		if(y_next>=y)
			a=(x_next-x)+(y_next-y);
		else
			a=MOD;
		cout << " xnext= " << x_next << " y_next= " << y_next << endl;
		cout << " a= " << a << endl;

		y1_next=y+(q-(y%q));
		x1_next=(y1_next/q)*p;
		if(x1_next>=x)
			b=(x1_next-x)+(y1_next-y);
		else
			b=MOD;
		cout << " x1 next= " << x1_next << " y1 _next= " << y1_next << endl;

		cout << min(a,b) << endl;

	}

return 0;	
}

	// 	if(p==q){
	// 		cout << -1 << endl;
	// 		continue;
	// 	}
	// 	if(x*q == y*p ){
	// 		cout << 0 << endl;
	// 		continue;
	// 	}
	// 	int res= ( (p+q)*(x+y)/(abs(p-q)) ) -(x+y);
	// 	res/=2;
	// 	cout << res << endl;
