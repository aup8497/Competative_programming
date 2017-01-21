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
int a[200001][10]={0};

int main(){

	cin >> n;
	string s;
	cin >> s;

	a[n-1][s[n-1]-'0']++;

	for(i=n-2;i>=0;i--){
		for(j=0;j<10;j++){
			a[i][j]=a[i+1][j];
		}
		a[i][s[i]-'0']++;
	}


	// for(i=0;i<n;i++){
	// 	for(j=0;j<10	;j++){
	// 	cout << a[i][j] << " " ;
	// 	}
	// 		cout << endl;
	// }
	for(i=0;i<1000;i++){
		if(i%8==0){
			num=i;
			while(num!=0){
				int dig=num%10;
				
			}

		}
	}


return 0;	
}
