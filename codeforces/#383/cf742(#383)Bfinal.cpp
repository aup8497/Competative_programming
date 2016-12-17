#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

#define ll long long 

#define loop(i,n) for(int i = 0;i < (n);i++)

//you cant define MAX values like this...instead you should use const int  
// #define MAX 1e5
// #define MOD	1e9
#define FOR(i,x,y) for(i=x;i<y;i++)

/*  this is my solution  */
// ll a[1000005]={0};
// ll f[1000005]={0};

// int main(){
// 	ll n,x,i,res=0;

// 	cin >> n >> x;

// 	FOR(i,0,n){
// 		cin >> a[i];
// 		f[a[i]^x]++;
// 	}

// 	FOR(i,1,n){

// 		res+=f[a[i]];
// 	}
// 	cout << res << endl;

// return 0;	
// }

int cnt[1 << 20];
int n,x;

int main(){
	ll ans = 0;
	scanf("%d %d",&n,&x);
	loop(i,n){
		int a; scanf("%d",&a);
		ans += cnt[a ^ x];
		cnt[a]++;
	}
	cout << ans << endl;
	
	return 0;
}

