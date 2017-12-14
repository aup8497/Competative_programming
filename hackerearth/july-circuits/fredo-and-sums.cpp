#include <bits/stdc++.h>
using namespace std;

int main(){

	long t,n,i,a[100005];
	cin >> t;

	while(t--){

		cin >> n;
		for(i=0;i<n;i++)
			cin >> a[i];

		sort(a,a+n);
		long long summx=0,summn=0;
		for(i=0;i<n/2;i++){
			summx+=a[n/2+i]-a[i];
			summn+=a[2*i+1]-a[2*i];
		}

		cout << summn << " " << summx  << endl;
	}

}
