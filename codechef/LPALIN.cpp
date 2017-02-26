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

	int t;
	cin >> t;

	while(t--){
			cin >> n ;
		string s;
		int flag=0;
		cin >> s;
		for(i=0;i<(n/2);i++){	
			if(s[i]!=s[n-i-1])
				flag=1;
		}	
		if(flag==0)
			cout << "0" << endl;
		else
			cout << "1" << endl;

	}

return 0;	
}
