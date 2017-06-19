#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

#define ll long long 

#define loop(i,n) for(int i = 0;i < (n);i++)

ll minimum(ll a,ll b){
	return (a<b) ? a : b ;
}

int main(){
	ll n,a,b,c,best,k;

	cin >> n >> a>> b>> c;

	int rem=4-(n%4);

	if(rem==4){
		cout << "0" << endl;
	}else{
		if(rem==1){
		k=minimum(minimum(a,b+c),3*c);
		}else if(rem==2){
		k=minimum(minimum(b,2*a),2*c);
		}else if(rem==3){
		k=minimum(minimum(c,a+b),3*a);
		}

		cout << k << endl;
	}




return 0;	
}