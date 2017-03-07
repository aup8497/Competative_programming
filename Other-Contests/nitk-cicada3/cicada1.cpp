#include <cstdio>
#include <iostream>
#include <string>

#define ll long long
#define MOD 1000000007
using namespace std;
 
ll res;

ll nfact(ll n){
	res=1;
	for(int i=n;i>=1;i--){
		res = (res%MOD)*i%MOD ;
	}
	return res%MOD;
}

ll num;
string s;
int main(){
	int t,n;
	cin >> t;
	
	while(t--){
		cin >> n;
		num=1;
		for(int i=0;i<n;i++){
			cin >> s;
			num=(num%MOD)*(nfact(s.length())%MOD)%MOD ;
		}

		cout << num << endl;

	}
return 0;	
}

//answers

//precompute factorial of everything between 0 and 10^5 -> precomputation
// fact[10^5]
fact[0]=1;
for(i=0;i<MAX;i++){

}


//fermats theoram
// a/b %mod  = (a * inv(b))%mod

// inv(b)=b^(mod-2) % mod
// 
// 
// 
