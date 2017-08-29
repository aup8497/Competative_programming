// web4.cpp

#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

int n,m,i,j,k,x,res=0,sum=0;
int a[200][200],b[200][200];
std::vector<int> v;

int main(){

	int t,x1,x2,y2,y1;
	cin >> t;
	cin >> n >> m;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin >> a[i][j];
			if(j==0)
				b[i][j]=a[i][j];
			else
				b[i][j]=b[i][j-1]+a[i][j];
			
			// cout << b[i][j] << " ";
		}
		// cout << endl;
	}
	

	while(t--){
		sum=0;
		cin >> x1 >> y1 >> x2 >> y2;
		for(i=x2;i>=x1;i--){
			sum+=(b[i][y2]-b[i][y1]+a[i][y1]);
		}

		cout << sum << endl;
	}


return 0;	
}