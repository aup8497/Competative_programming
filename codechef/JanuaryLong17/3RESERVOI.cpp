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
		cin >> n >> m ;
			string a[n];
			for(i=0;i<n;i++)
				cin >> a[i];

			int flag=0;

			for(i=0;i<n;i++){
				for(j=0;j<m;j++){
					if((i!=0 && a[i][j]=='W' && a[i-1][j]=='B')  || (i!=0 && a[i][j]=='A' && a[i-1][j]=='B') ){
						flag=1;
						cout << "no" << endl; 
						// cout << "came to first " <<endl;
						break;
					}
					if( (j==0 && a[i][j]=='W') || (j==m-1 && a[i][j]=='W') ){
						flag=1;
						cout << "no" << endl;
						// cout << "came to second " <<endl; 
						break;
					}
					if( (j!=0 && j!=m-1 ) && ( (a[i][j]=='W'&&a[i][j+1]=='A') || (a[i][j]=='W'&& a[i][j-1]=='A')  ) ){
						flag=1;
						cout << "no" << endl; 
						// cout << "came to third " <<endl;
						break;
					}

				}
					if( flag==1 )
						break;
			}

			if(flag==0){
				cout << "yes" << endl; 
			}	
	}


return 0;	
}
