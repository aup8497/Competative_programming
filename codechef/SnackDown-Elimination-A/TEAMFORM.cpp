#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;
int a[MAX],b[MAX];
std::vector<int> v;

int main(){
	int t,u,v;
	cin >> t;
	while(t--){

		cin >> n >> m;
		for(i=0;i<m;i++)
			cin >> u >> v;
		if(n%2==0)
			cout << "yes" << endl;
		else
			cout << "no" << endl;		
	}
return 0;	
}