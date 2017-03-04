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

	ll t;
	cin >> t;
	while(t--){
		ll cats,dogs,legs,catsleft;
		int flag1=0,flag2=0;
		cin >> cats >> dogs >> legs;

		if(cats>(2*dogs)){
			catsleft=cats-(2*dogs);
			if( (legs>=(4*(dogs+catsleft))) && (legs%4 == 0) )
				flag1=1;
		}else{
			
			if( (legs>=(4*dogs)) && (legs%4 == 0) )
				flag1=1;
		}

		if(legs<= ((cats+dogs)*4) )
			flag2=1;

		if(flag1==1 && flag2==1){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}		
	}
	
return 0;	
}
