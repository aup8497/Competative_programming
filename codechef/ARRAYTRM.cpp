// ARRAYTRM.cpp

#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0,f=0;
int a[MAX],b[1000];
std::vector<int> v;

int main(){
	int t,n,k;
	cin >> t;
	while(t--){
		cin >> n >> k ;

		memset(b,0,sizeof b);

		for(i=0;i<n;i++){
			cin >>  a[i];
			++b[ a[i] % (k+1) ];
		}

		f=0;
		for(i=0;i<=k;i++)
			if( b[i] >= n-1 ) f=1;

		if(f==1)
			cout << "YES" << endl; 
		else
			cout << "NO" << endl; 

		// printf("%s\	n",(f==1)?"YES":"NO" ) ; 	
		// cout << endl;
	}


return 0;	
}