#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;
// int a[MAX],b[MAX];
std::vector<int> v;

int main(){

	int x,y,x1,x2,y1,y2;

	cin >> x1 >> y1 >> x2 >> y2;
	cin >> x >> y;

	int a,b;

	a = abs(x2-x1);
	b = abs(y2-y1);

	if(abs(x2-x1)%x==0 && abs(y2-y1)%y==0){
		if(abs(a/x-b/y)%2==0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;		
	}
	else{
		cout << "NO" << endl;
	}

return 0;	
}