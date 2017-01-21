//question can be found here: https://www.hackerrank.com/contests/acm-knapsack-2017/challenges

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
	int t,j,i;
	cin >> t;
	string s1,s2;
	for(j=0;j<t;j++){
		cin >> s1 >>s2;
		ll res=0;
		for(i=0;i<s1.length();i++){
			res+=abs(s1[i]-s2[i]);
		}

		cout << res << endl;
	}
	


return 0;	
}
