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

	ll count=0;
	char c;
	for(i=0;i<n;i++){
		if(count%2==0){
			
			if(c=='a')
				c='b';
			else
				c='a';
		}
	count++;

		cout << c ;

	}


return 0;	
}
