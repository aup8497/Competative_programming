#include <bits/stdc++.h>
#define ll long long
using namespace std;
#define MAX 1e5+5

ll n,m,i,j,k;
ll a[(int)MAX];

int main(){

	cin >> n;
	for(i=0;i<n;i++)
		cin >> a[i];

	ll sum=a[0];
	ll mn=a[0];
	ll globalSum=a[0];
	ll lengthOfTheMaxArray1=1;
	ll lengthOfTheMaxArray2=1;

	for(i=1;i<n;i++){
		if(sum+a[i] < a[i] ){
			sum=a[i];
			mn=a[i];
			length=1;
		}else{
			sum+=a[i];
			mn=min(mn,a[i]);
		}
		globalSum=max(sum,globalSum);
	}

	if(mn < 0){
		globalSum-=mn;
	}

	cout << "min value = " << mn  << endl;
	cout << globalSum << endl;


return 0;	
}	