#include <bits/stdc++.h>
#define ll long long
#define MAX 100005
using namespace std;

ll n,m,i,j,k;
ll a[MAX];

int main(){
	ll t,hit;
	cin >> n >> hit >> t ;

	for(i=0;i<n;i++)
		cin >>  a[i];

	sort(a,a+n);
	int sum=0,cnt=0;
	for(i=0;i<n;i++){
		sum+=( (a[i]+hit-1)/hit );
		if(sum>t){
			break;
		}else{
			cnt++;
		}
	}

	cout << cnt << endl;

return 0;	
}