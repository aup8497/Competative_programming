#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long int nc2(long long int n){

	return (n*(n-1)/2);
}


int main(){
	//int c1,c2,c3,c4,c5;
	//float avg;
	long long int n,m,min,max,quotient,remainder;

	cin >> n >> m ;

	quotient=n/m;
	remainder=n%m;
	
	min=(m-remainder)*nc2(quotient) + remainder*nc2(quotient+1);

	max=nc2(n-m+1);

	cout << min << " " << max << endl ;


return 0;	
}