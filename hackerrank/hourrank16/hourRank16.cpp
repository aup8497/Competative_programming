//problem 1

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

ll a[MAX];
int main(){
	int n,countres=0;
	cin >> n ;
	ll min1=MAX,min2=MAX;


	for(int i=0;i<n;i++){
		cin >> a[i];

		if(a[i]<=min1){
			min2=min1;
			min1=a[i];
		}
	}

	if(min2!=min1){
		cout << min(2*min1,min2) << " " << "1" << endl;
	}else{
		for(int i=0;i<n;i++){
			if(a[i]==min1)
				countres++;
		}
		cout << min1 << " " <<countres  << endl;
	}
	


return 0;	
}
