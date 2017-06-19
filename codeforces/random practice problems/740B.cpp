#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

#define ll long long 
const int MAX=1e5;
#define loop(i,n) for(int i = 0;i < (n);i++)

ll minimum(ll a,ll b){
	return (a<b) ? a : b ;
}

int main(){
	ll n,m,i,j,res,total=0,l,h;

	cin >> n >> m;
	ll a[n];

	loop(i,n){
		cin >> a[i];
	}

	loop(i,m){

		cin >> l >> h ;
		res=0;
		for(j=l-1;j<h;j++){
			res+=a[j];
		}
		if(res>=0){
			total+=res;
		}

	}
	cout << total << endl;

return 0;	
}