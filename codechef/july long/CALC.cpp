#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;
int a[MAX],b[MAX];
std::vector<int> v;

int main(){
	ll t,n,k,i,x,mid,nearestGreater,nearestLesser,nearest;
	cin >> t;

	while(t--){
		cin >> n >> k;

		if(k>=n){
			cout << 0 << endl;
			continue;
		}


		// x=(1+(n/k))*k/2;
		// res=(n-x)*x/k;

		mid=(n/2);
		nearestGreater=mid+(k>(n-mid)?(k%(n-3)):((n-mid)%k));
		nearestLesser=mid-k+(k>(n-mid)?(k%(n-3)):((n-mid)%k));

		if(abs(nearestLesser-mid)<abs(nearestGreater-mid)){
			nearest=nearestLesser;
		}else{
			nearest=nearestGreater;
		}


		// cout << "nearest is " << nearest << endl;		

		res=(nearest)*(n-nearest)/k;
		cout << max(res,n-k) << endl;

	}


return 0;	
}