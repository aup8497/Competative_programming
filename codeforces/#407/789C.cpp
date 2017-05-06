//this can be solved with the help of kadanes algorithm

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
ll a[MAX],b1[MAX],b2[MAX];
int main(){

	cin >> n ;
	for(i=0;i<n;i++)
		cin >>  a[i];
	
	for(i=0;i<n-1;i++){
		b1[i]=abs(a[i]-a[i+1])*pow(-1,i);
	}

	for(i=1;i<n-1;i++){
		b2[i-1]=abs(a[i]-a[i+1])*pow(-1,i+1);
	}

	//for printing
	// for(i=0;i<n-1;i++)
	// 	cout << b1[i] << ' ';
	// cout << endl;
	// for(i=0;i<n-2;i++)
	// 	cout << b2[i] << ' ';
	
	ll mx=-MOD;
	ll cur=b1[0];
	mx=cur;
	for(i=1;i<n-1;i++){
		cur=max(b1[i],cur+b1[i]);
		mx=max(mx,cur);
	}

	cur=b2[0];
	mx=max(cur,mx);
	for(i=1;i<n-2;i++){
		cur=max(b2[i],cur+b2[i]);
		mx=max(mx,cur);
	}

	cout << mx << endl;
return 0;	
}
