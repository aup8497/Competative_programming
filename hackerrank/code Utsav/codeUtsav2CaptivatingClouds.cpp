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
int a[40][40];
int visited[40][40]={0};
int sum=0;
int total=0;
int z=0;
void count(int a[40][40],ll n,int x,int y){

	//down
	if((x+1)<n && visited[x+1][y]==0 ){
		visited[x+1][y]=1;
		sum+=a[x+1][y];
		// cout << z++ << "came here for x=" << x+1 << " y= " << y << endl;
		if( a[x+1][y]==0 )
			count(a,n,x+1,y);

	}

	//up
	if( (x-1)>=0 && visited[x-1][y]==0  ){
		
		visited[x-1][y]=1;
		sum+=a[x-1][y];
		// cout << z++ << "came here for x=" << x-1 << " y= " << y << endl;
		if( a[x-1][y]==0 )
			count(a,n,x-1,y);

	}

	//left
	if( (y-1)>=0 && visited[x][y-1]==0 ){
		visited[x][y-1]=1;
		sum+=a[x][y-1];
		// cout << z++ << "came here for x=" << x << " y= " << y-1 << endl;
		if( a[x][y-1]==0 )
			count(a,n,x,y-1);

	}
	//right
	if((y+1)<n && visited[x][y+1]==0){
		visited[x][y+1]=1;
		sum+=a[x][y+1];
		// cout << z++ << "came here for x=" << x << " y= " << y+1 << endl;
		if( a[x][y+1]==0 )
			count(a,n,x,y+1);

	}

}

int main(){

	cin >> n ;

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < n; ++j){
			cin >> a[i][j];
			total+=a[i][j];
		}
	
	int q;
	cin >> q;
	for (int i1 = 0; i1 < q; ++i1)
	{
		int x,y;
		cin >> x >> y;
		int p,p1;
		// for(p=0;p<40;p++)
		// 	for(p1=0;p1<40;p1++)
		// 		visited[p][p1]=0;
		
		visited[x][y]=1;
		if(a[x][y]==0){
		count(a,n,x,y);			
		}else{
			// sum+=a[x][y];
		}


	}
		cout << total-sum << endl; 

return 0;	
}
