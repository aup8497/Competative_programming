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
string s;
	cin >> s >> k ;
	ll len=s.length();
	ll temp=len-1;
	ll count=0;

	if( len<=k ){
		count=len-1;
	}else if( std::count(s.begin(), s.end(), '0')<k  ){
		count = len-1;
	}
	else{
		while(k!=0){

			if( s[temp]=='0' ){
				k--;
				// cout << "hi for k" << endl;
			}else{
				count++;
				// cout << "hi for count" << endl;
			}
			temp--;

		}

	}

	cout << count << endl;


return 0;	
}
