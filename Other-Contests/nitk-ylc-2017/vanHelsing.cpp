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

	cin >> n ;
	ll x=0;
	ll num=0;
	int flag=0;
	int flag1=0;

	while( n > 0 ){

		if( n%4==2 || n%4==3 ){
			flag1=1;
			break;
		}	

		// cout << "the value of n is " << n << endl;
		if(n==1)
				flag=1;

		if(n%4==1){
			n=n-1;
			num++;
		}
			if(n==1)
				flag=1;

		n/=4;

			if(n==1)
				flag=1;
	}
	
	if(flag1==0){
		if(flag==0){
			cout << "-1" << endl;
		}else
			cout << num << endl;		
	}else
		cout << "-1" << endl;

return 0;	
}
