#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <math.h>
const int MAX=1e5+5;
#define ll long long
using namespace std;
#define pb push_back

int main(){
 	
	ll n,i;
	cin >> n;

	for(i=sqrt(n);i>=1;i--){
		if(n%i==0){
			break;
		}
	}
	
	 cout << i << " " << (n/i) <<endl;

}
