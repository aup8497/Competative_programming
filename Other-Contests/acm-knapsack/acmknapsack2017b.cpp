//this is wrong
//https://www.hackerrank.com/contests/acm-knapsack-2017/challenges

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

	for(i=0;i<n;i++){
		cin >> a[i];
	}

	if(n==1){
		cout << 0 <<endl;
		exit(0);
	}

	if(a[0]>a[1]){
		max1=a[0];
		pos1=0;
		max2=a[1];
		pos2=1;
	}else{
		max1=a[1];
		pos1=1;
		max2=a[0];
		pos2=0;
	}

	for(i=2;i<n;i++){
		if(a[i]>=max1){
			max2=max1;
			max1=a[i];
		}
	}

return 0;	
}
