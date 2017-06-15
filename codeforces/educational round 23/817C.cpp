#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,s,res=0,high,low,sum=0,mid;
int a[MAX],b[MAX];
std::vector<int> v;

bool check(ll n){
	ll n1=n,dig=0;

	while(n1>0){
		// cout << "a";
		dig+=n1%10;
		n1=n1/10;
	}

	if(n-dig>=s)
		return true;
	else
		return false;

}

int main(){

	cin >> n >> s;

	low=1,high=n+1;

	while(low<high){
		// cout << "hi" << endl;
		mid=(low+high)/2;
		if( check(mid) ){
			high=mid;
			// cout << "a" ;
			// res=mid;
		}
		else{
			low=mid+1;
		}

		// cout << "mid=" << mid << endl;
	}

	if( low == n ){
		if(check(low))
			cout << 1 << endl;
		else
			cout << 0 << endl;
	}
	else
	cout <<  n-low+1 << endl;



return 0;	
}