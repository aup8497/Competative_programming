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

int n,m,i,j,k,res;

int main(){
	ll t;
	cin >> t;

	while(t--){

		int x1,x2,y1,y2;
		cin >> n;
		int a[4][60];
		for(i=0;i<n;i++){
			cin >> x1 >> y1 >> x2 >> y2 ;
			a[0][i]=min(x1,x2);
			a[1][i]=max(x1,x2);
			a[2][i]=min(y1,y2);
			a[3][i]=max(y1,y2);
		}
		
		res=MAX;

		for(i=1;i<=50;i++){
			for(j=1;j<=50;j++){				

				int meanDistanceForAllSnakes=0;

				for(int z=0;z<n;z++){

					int distx,disty;
				//finding the min x dis
					if( i<a[0][z] ){
						distx=abs( a[0][z] - i);
					}else if( i>a[1][z] ){
						distx=abs( i - a[1][z] );
					}else{
						distx=0;
					}

					if( j<a[2][z] ){
						disty=abs( a[2][z] - j);
					}else if( j>a[3][z] ){
						disty=abs( j - a[3][z] );
					}else{
						disty=0;
					}

					int totalDistanceForASnake=distx+disty;
					meanDistanceForAllSnakes=max(totalDistanceForASnake,meanDistanceForAllSnakes);
				}

				res=min(res,meanDistanceForAllSnakes);

			}
		}

		cout << res << endl;

	}

}