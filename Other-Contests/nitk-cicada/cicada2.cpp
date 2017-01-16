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
	string s;
	cin >> n ;
	int sum=0;
	cin >> s;

	for(i=0;i<n-1;i++){
		if(s[i]=='B')
			sum++;
	}
	
	cout << sum << endl;

return 0;	
}
