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
 
ll n,m,i,j,k,p,z;
int a[2*MAX],block[2*MAX],prefix[2*MAX],cnt=0;
 
char b[MAX],ch;
int main(){
 
	cin >> n >> k >> p;
 
	for(i=0;i<n;i++)
		cin >> a[i];
	for(i=0;i<n;i++)
		a[n+i]=a[i];
 
	prefix[0]=(a[0]==1)?1:0;
	//calculate prefix sum of 1s
	for(i=1;i<2*n;i++){
		prefix[i]=(a[i]==1)?prefix[i-1]+1:prefix[i-1];
	}
 
	block[0]=prefix[k-1];
	// for(i=1;i<=n-k;i++){
	// 	block[i]=prefix[i+k-1]-prefix[i-1];
	// }
	// for(i=n-k+1;i<n;i++){
	// 	block[i]=prefix[n-1]-prefix[i-1]+prefix[k-n+i-1];
	// }
 
	for(i=0;i<n-1;i++){
		block[i+1]=prefix[i+k]-prefix[i];
	}
	for(i=0;i<n;i++)
		block[i+n]=block[i];
 
	// cout << "block[i]";
	// for(i=0;i<n;i++)
	// 	cout << block[i] << " " ; 
 
	// cout << endl;
 
	for(z=0;z<p;z++){
		cin >> ch;
		if(ch=='!'){
			cnt+=n-1;
			cnt%=n;
		}
		else{
			cout << *max_element(block+cnt,block+n-k+cnt+1) << endl;
		}
	}
 
return 0;	
}