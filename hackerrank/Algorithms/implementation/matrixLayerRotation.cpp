// matrixRotation.cpp

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
ll a[300][300];
ll rot,index, r,c;
int main(){

	cin >> r >> c ;
	cin >> rot;

	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
			cin >> a[i][j];
	}

	ll mini=min(r,c);
	// if(min(r,c)==r){
	// 	goto label1;
	// }else{
	// 	goto label2;
	// }

	while(rot--){
		for(index=0;index<mini/2;index++){
		// for(j=0;j<c;j++){
		ll temp=a[index][index];

		for(j=index;j<c-1-index;j++){
			a[index][j]=a[index][j+1];
		}
		for(i=index;i<r-1-index;i++){
			a[i][j]=a[i+1][j];
		}
		
		// j=j-1;
		for(;j>index;j--){
			a[i][j]=a[i][j-1];
		}
		for(;i>index+1;i--){
			a[i][j]=a[i-1][j];
		}

		a[i][j]=temp;

		// }
	}
	}

	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
			cout << a[i][j] << " ";
		cout << endl;
	}
	


return 0;	
}
