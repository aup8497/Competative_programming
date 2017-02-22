//CHAIRS

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
		ll pos;
		string s;
		cin >> s;
		ll countOf1=0,count0=0,maxcountOf0=0;
		maxcountOf0=0;
		
		for(i=0;i<n;i++){
			if(s[i]=='1'){
				pos=i;
				break;
			}
		}

		for(i=pos;i<n+pos;i++){
			j=i%n;
			if(s[j]=='1'){
				countOf1++;
				count0=0;
			}else{
				count0++;
				maxcountOf0 = max(maxcountOf0,count0);
			}
		}

		cout << n-countOf1-maxcountOf0 << endl;

	}


return 0;	
}
