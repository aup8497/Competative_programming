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


bool prime[100001]={false};

void sieve(ll n){
	prime[0]=true;
	prime[1]=true;
	for(i=2;i<=sqrt(n);i++){
		if(prime[i]==false){
			for(j=2*i;j<=n;j+=i){
				prime[j]=true;
			}
		
	}}

}

int main(){

	cin >> n ;

	sieve(100001);	
	if(n>2)
	cout << 2 << endl;
	else
	cout << 1 << endl;	
	for(i=0;i<n;i++){
		if(prime[i+2]==false)
			cout << 1 << " ";
		else
			cout << 2 << " ";
	}


return 0;	
}
