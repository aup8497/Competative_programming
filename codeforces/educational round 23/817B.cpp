// 817B.cpp
#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
#define MOD 1000000007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;
int a[MAX],b[MAX];
std::vector<int> v;


ll com(int n1,int r){
	ll res1=1,res2=1,r1=r;
	while( r1!=0 ){
		res1*=n1;
		n1--;
		r1--;
	}

	while(r!=0){
		res2*=r;
		r--;
	}

	// while()

	return res1/res2;
}

int main(){

	cin >> n ;

	for(i=0;i<n;i++)
		cin >> a[i];

	int mn=MOD;
	int cnt=0;
	int top=3;

	for(j=0;j<3;j++){
		cnt=0;
		mn=MOD;
		for(i=0;i<n;i++){
			if( mn > a[i] ){
				cnt=1;
				mn=a[i];
			}else if(mn==a[i])
			cnt++;
		}
		if(cnt>=top){
			cout << com(cnt,top) << endl;
			exit(0);
		}else{
			top-=cnt;
		}

		for(i=0;i<n;i++){
			if( mn == a[i] ){
				a[i]=MOD;
			}
		}

	}

return 0;	
}