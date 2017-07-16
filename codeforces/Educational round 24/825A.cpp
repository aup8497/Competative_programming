// A.binary protocol
#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;
// int a[MAX],b[MAX];
// std::vector<int> v;

int main(){

	cin >> n ;
	string s;
	cin >> s;
	int flag=1;
	for(i=0;i<n;i++){
		if(s[i]=='0'){
			cout << sum ;
			sum=0;
		}

		if(s[i]=='1')
			sum++;
	}

	cout << sum;

return 0;	
}