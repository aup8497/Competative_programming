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


int main(){
	int i,j,pos,max1,t;
	cin >> t ;

	while(t--){
		int n;
		cin >> n;
		int w[n],h[n];

		for(i=0;i<n;i++){
			cin >> w[i];
		}
		for(i=0;i<n;i++){
			cin >> h[i];
		}

		sort(w+1,w+n);
		sort(h,h+n);
		reverse(h,h+n);

		max1=w[0]*h[0];
		int pos=0;
		for(i=1;i<n;i++){
			if(w[i]*h[i] >= max1)
				pos=i;
		}
		if(pos==0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;


	}

return 0;	
}
