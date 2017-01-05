//this problem seems easy but is a bit tricky.
//USES BUBBLE SORT ,COUNTS THE TOTAL NUMBER OF SWAPS.
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
		cin >> n  ;
		std::vector<ll> a(n);
		a.clear();
		bool swapped=false;
		ll result=0;
	for(i=0;i<n;i++){
		cin >> a[i];
	}

	for(i=0;i<n;i++){
		if(a[i]>(i+3)){
			cout << "Too chaotic" << endl;
			goto label;
		}
	}

	for(i=0;i<n-1;i++){
		swapped=false;
        for(j=0;j<n-i-1;j++){
        	
        	if(a[j+1]<a[j]){
        		swap(a[j+1],a[j]);
        		result+=1;
        		swapped=true;
        	}
        }
        if(swapped==false){
        	break;
        }
    }


	cout << result << endl;

	label:;
	
} 

return 0;	
}
