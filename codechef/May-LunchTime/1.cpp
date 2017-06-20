#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;
int a[MAX],b[MAX];
std::vector<int> v;

int main(){
	string s;
	int flag=0;
	cin >> s ;
	n=s.length();
	int cnt=0;
	for(i=0;i<n;i++)
	{
		if(s[i]=='1' && flag==0){
			cnt+=1;
			flag=1;
		}
		if( s[i]=='0' ){
			// cnt=0;
			flag=0;
		}
	}
	if(s[0]=='1')
		cout << 2*cnt-1 << endl;
	else
		cout << 2*cnt << endl;


return 0;	
}