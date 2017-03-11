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

ll n,m,i,j,k,c,x,y;

int main(){

int l,r;
	cin >> n >> m;
	ll a[n][m]={0};
	ll prefix[n][m]={0};

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			prefix[i][j]=1;
		}
	}

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){

			cin >>a[i][j];

	//include another condition
			if(i>0){
				if(a[i][j] >=  a[i-1][j] ){
				prefix[i][j]=prefix[i-1][j] + 1;
			}
			
			}

		}	
	}

	int prefixmax[n]={0};

	for(i=0;i<n;i++){
		int maxrow=0;
		for(j=0;j<m;j++){
			maxrow=max(maxrow,(int)prefix[i][j]);
		}
		prefixmax[i]=maxrow;
	}	

	cin >> k;
	

	for(c=0;c<k;c++){
		cin >> x >> y;
		l=x-1;
		r=y-1;

			if(r-prefixmax[r]+1 <= l )
				cout << "Yes" <<endl;
			else
			cout << "No" << endl;

	}	
	


return 0;	
}
