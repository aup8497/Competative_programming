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

ll n,m,i,j,k,sum=0,x;

int main(){
	int t;
	cin >> t;
	while(t--){

		std::vector< pair<int,int> > v2;

		int flag=0,q;
		cin >> n >> q ;
		int a[n],b[n];
		int visited[n]={0};
		for(i=0;i<n;i++){
			cin >> a[i];
		}

		for(i=0;i<n;i++){
			cin >> b[i];
			 v2.pb(mp(b[i]+a[i],i));
		}

		sort(v2.begin(),v2.end());
		reverse(v2.begin(),v2.end());

		ll sum=0;
		for(i=0;i<n;i++){
			if(q==0){
				sum-=b[v2[i].second] ;
			}else{
				sum+=a[v2[i].second] ;
				q--;
			}
		}	
		cout << sum << endl;

	}

return 0;	
}
