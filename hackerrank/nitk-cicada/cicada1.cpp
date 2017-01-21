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
	int i,n,a;
	cin >> n ;
	int sum=0;
	for(i=0;i<n;i++){
		cin >> a;
		if(a>0){
			sum+=a;
		}
	}

	cout << sum << endl;

return 0;	
}
