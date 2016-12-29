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

	for (int i = 0; i < n; ++i)
	{
		for(j=0;j<n-i-1;j++){
			cout << " "; 
		}

		for(j=0;j<i+1;j++){
			cout << "#"; 
		}
		cout << endl;
		
	}


return 0;	
}
