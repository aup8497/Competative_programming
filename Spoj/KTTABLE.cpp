#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define MAX (int)1e5+5
ll n,m,i,j,k;
ll a[MAX],b[MAX],diff[MAX];
ll cnt=0;
int main(){

	int t;
	cin >> t;
	while(t--)
	{
		cin >> n ;
		cnt=0;
		for(i=0;i<n;i++){
			cin >> a[i] ;
			if(i>=1){
				diff[i]=a[i]-a[i-1];
			}else{
				diff[0]=a[0];
			}
		}
		for(i=0;i<n;i++){
			cin >> b[i] ;
			if(b[i]<=diff[i])
				cnt++;
		}

		cout << cnt << endl;

	}


return 0;	
}