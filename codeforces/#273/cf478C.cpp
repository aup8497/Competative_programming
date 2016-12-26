#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	//int c1,c2,c3,c4,c5;
	//float avg;
	vector <long long int> array(3);

	cin >> array[0] >> array[1] >> array[2] ;

	sort(array.begin(),array.end());

	long long int result = (array[0] + array[1] + array[2])/3;

	if( result > (array[0] + array[1]) ){
		result=(array[0] + array[1]);
	}

	cout << result;


return 0;	
}