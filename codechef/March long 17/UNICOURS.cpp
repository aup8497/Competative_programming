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

ll n,m,i,j,k,t,x,res;

int main(){

	cin >> t;

	while(t--){
		cin >> n;
		res=-1;
		for(i=0;i<n;i++){
			cin >> x;
			res=max(res,x);
		}
		cout << n-res << endl;
	}

return 0;	
}
