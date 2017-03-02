#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
const int MAX=1e5+5;
#define ll long long
using namespace std;

ll coal[100],profit[100],policy[100],tax[100],maxProfit,n,t;

int main(){
 	cin >> t;
	while(t--){
		
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> coal[i];
	}
	for(int i=0;i<n-1;i++){
		cin >> tax[i];
	}
	for(int i=0;i<n-1;i++){
		cin >> policy[i];
	}
	
	maxProfit=coal[0];
	profit[0]=coal[0];
	for(int i=1;i<n;i++){
		profit[i]=profit[i-1]-(policy[i-1]*tax[i-1])+coal[i];
		if(profit[i]>maxProfit)
			maxProfit=profit[i];
	}

	cout << maxProfit << endl;
	 	
	}

}
