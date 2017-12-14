#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int n){
	int flag=0,i,j;
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0)
		return true;
	else
		return false;

}

int main(){

	int n,i,j;
	int a[200][200]={0};

	cin >> n;
	// int a[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
		
	int res=0;

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			
			int sum=0;
						
			if(i>0){
				sum+=a[i-1][j];
			}
			if(i<n-1){
				sum+=a[i+1][j];
			}

			if(j>0){
				sum+=a[i][j-1];
			}
			if(j<n-1){
				sum+=a[i][j+1];
			}

			if(checkPrime(sum))
				res++;

		}
	}
	
	cout << res << endl;

}