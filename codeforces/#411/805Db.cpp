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
string s;

int main(){

	ll flag=0,cnt=0,res=0,rem=0;
	cin >> s;
	ll n=s.length();
	
	for(i=n-1;i>=0;i--){
		if(s[i]=='a'){

			res=(res+cnt)%MOD;
			cnt=(cnt*2)%MOD;

		}else{
			cnt++;
		}

	}
	cout << res << endl;


return 0;	
}
