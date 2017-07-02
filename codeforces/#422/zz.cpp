#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;
int a[MAX],b[MAX];
std::vector<int> v;


int fact(int a){
	if(a==0)
		return 1;
	if(a==1)
		return a;
	else
		return a*fact(a-1); 
	// return 
}

int main(){

	cin >> n >> m ;

	cout << fact(min(n,m)) << endl;


return 0;	
}