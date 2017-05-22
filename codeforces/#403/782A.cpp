//completed

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

ll n,m,i,j,k,x;

int main(){

	cin >> n ;
	int a[n+1]={0};
	int res=0,sum=0;
	for(i=0;i<2*n;i++){
		cin >> x;
		a[x]++;
		if(a[x]==1){
			sum++;
		}else if(a[x]==2){
			sum--;
		}
		res=max(res,sum);

	}
			
		cout << res << endl;	

return 0;	
}
