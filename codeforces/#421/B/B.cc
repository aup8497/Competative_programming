#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

// ll n,m,i,j,k,x,res=0,sum=0;
// int a[MAX],b[MAX];
// std::vector<int> v;

int main(){
	int a,b;
	ll l,r;
	cin >> a >> b >> l >> r ;

	if(r<=a){
		cout << r-l+1 << endl;
		exit(0);
	}

	if(l<=a){
		int left=a-l+1;
		int mid=1;
		int right=(r-a)%(b+1)-b;
		right=min(0,right-b);

		if(r>a+b+a){
			cout << a+1 << endl;
			exit(0);
		}
		else{
			cout << min(a+1,left+right+mid);
			exit(0);
		}
	}
	if(r-l+1>=a+b){
		cout << a+1 << endl;
		exit(0);
	}

	int newl = (l-a)%(a+b);
	int newr = (r-a)%(a+b);

		if(newl<=b && newr<=b)
			cout << 1 << endl;
		else if(newl<=b && newr>b)
			cout << 1+newr << endl;
		else
			cout << newr-newl << endl;


return 0;	
}
