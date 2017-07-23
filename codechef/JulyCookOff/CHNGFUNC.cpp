#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;
int a[MAX],b[MAX];
std::vector<int> v;

int main(){
	ll A,B;

	cin >> A >> B;

	sum =0;

	for(i=1;i<=A;i++){
		x = max(floor(sqrt(B+(i*i))-i),(double)0);
		sum+=x;
	}

	cout << sum << endl;

return 0;	
}