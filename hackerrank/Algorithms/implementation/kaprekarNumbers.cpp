#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
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

	int l,h,flag=0;
	cin >> l >> h ;

	for(i=l;i<=h;i++){
		ll sq=pow(i,2);
		string str=to_string(sq);
		int le=str.length();

		ll first=sq/pow(10,(str.length()+1)/2);
		ll second=sq % (int)(pow(10,(str.length()+1)/2));

		if(first+second==i){
			flag=1;
			cout << i << " ";
		}

	}

	if(flag==0){
		cout << "INVALID RANGE" << endl;
	}	


return 0;	
}
