#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countA[2][100],a[100],n,globalMaxLength=0;

int zigzagCount(int i){
	int j=i+1;
	int max1=0,max0=0;

	while(j < n){
		if(a[i]>a[j]){
			if(countA[0][j] > max0)
				max0=countA[0][j];
		}else if(a[i]<a[j]){
			if(countA[1][j] > max1)
				max1=countA[1][j];
		}		
		j++;
	}

	countA[0][i]=max1+1;
	countA[1][i]=max0+1;

	if(countA[0][i] > globalMaxLength)
		globalMaxLength=countA[0][i];
	if(countA[1][i] > globalMaxLength)
		globalMaxLength=countA[1][i];
	
//for debugging purposes only
	// cout << endl << endl;
	// cout << "pointer is at " << i <<endl;
	// for(int x=0;x<n;x++)
	// 	cout << countA[1][x] << " ";	
	// cout << endl;
	// for(int x=0;x<n;x++)
	// 	cout << countA[0][x] << " ";
	// cout << endl << endl;
	
}


int main(){
	
	int i,max=1;
	cin >> n;

	for (int i = 0; i < n; ++i)
		cin >> a[i];

	for(i=0;i<n;i++){
		countA[0][i]=1;
		countA[1][i]=1;
	}

//setting the count and bool for a[n-1]
	countA[0][n-1]=1;	
	countA[1][n-1]=1;
	globalMaxLength=1;

//getting the maxcount for each i
	for(i=n-2;i>=0;i--)
		zigzagCount(i);

	cout << globalMaxLength << endl;
	
return 0;	
}