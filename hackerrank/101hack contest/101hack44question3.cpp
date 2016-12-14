#include <iostream>
#include <vector>
//#include <assert.h>
#include <bits/stdc++.h>

//#define MAX 10000007
const int MAX=1e9+7;
using namespace std;


long long fact(long long x){
	if(x==1 || x==0)
		return 1;
	else 
		return x*fact(x-1);
}

long long com(long long n,long long r){
	return (fact(n)/(fact(n-r)*fact(r)));
}


int main()
{
	long long n,sum=0;
	int i,j;
	cin >> n;
	long long num=n-1;

	for(i=1;i<=num;i++){
		for(j=0;j<i;j++){
			sum+=i*pow(-1,j)*pow(i-j+1,num)*com(n+1,j) % MAX ;
		}
	}
	cout << sum << endl;

		return 0;
}
