#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,d,res=0,sum=0;

int main(){

	cin >> n >> d ;
	std::vector<long long> b(n),a(n);

	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		cin >> b[i];
	}
	long long sum=0;

	for(i=0;i<n;i++){
		sum+=(lower_bound(b.begin(), b.end(),a[i]-d)-b.begin());
		// cout << "a[i]=" << a[i] << " "  << lower_bound(b.begin(), b.end(),a[i]-d)-b.begin() << endl;
	}

	cout << sum;

return 0;	
}