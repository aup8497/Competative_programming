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
	string s1,s2;

	cin >> s1 >> s2 ;

	if(s1==s2)
		cout << "-1" << endl;
	else
		cout << max(s1.length(),s2.length()) << endl;


return 0;	
}
