#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;
int a[MAX],b[MAX];
std::vector<int> v;

int main(){
	int c,v,v1,a,l,i;
	cin >> c >> v >> v1 >> a >> l;

	for(i=0;;i++){

		c-=min(v1,v+(i*a));
		if(i!=0)
		c+=l;

		if(c<=0){
			cout << i+1 << endl;
			break;
		}

	}

return 0;	
}
