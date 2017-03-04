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
		string s[n];
		int flag=0;

		for(i=0;i<n;i++){
			cin >> s[i];
		}

		for(i=0;i<n;i++){
			if(i == n-1){
				if(s[i]=="cookie")
					flag=1;
			}else{
				if( s[i]=="cookie" && s[i+1]!="milk" )
					flag=1;
			}

		}

		if(flag==0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;


	}	


return 0;	
}
