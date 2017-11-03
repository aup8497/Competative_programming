#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>

#define pb push_back
#define mp make_pair
#define ll long long
#define MOD 1000000007
const int MAX=1e5+5;
using namespace std;

ll n,m,i,j,k;
ll a[MAX];

std::vector<int> v;

void sieve(){
	//memset(a,1,sizeof(a));
	
	for(i=0;i<n;i++){
		a[i]=1;
	}

	a[0]=a[1]=0;
	for(i=2;i<=sqrt(100000);i++){
		for(j=2*i;j<100000;j+=i){
			if(a[j]!=0){
				a[j]=0;
			}
		}
	}	
}

int main(){

	cin >> n ;

	sieve();
	if(n%2==0){
		cout << n/2 << endl;
		for(i=0;i<n/2;i++)
			cout << "2 ";
	}	

	else{
		while( n!=0 ){
			if(a[n]==1){
				v.pb(n);
				break;
			}
			else{
				n=n-2;
				v.pb(2);
			}
		}

		cout << v.size() << endl;
		for (int i = 0; i < v.size(); ++i)
		{
			cout << v[i] << " " ;
		}

	}

	// for(i=0;i<n;i++){
	// 	 if(a[i]==1)
	// 		cout << i;
	// }

	

return 0;	
}
