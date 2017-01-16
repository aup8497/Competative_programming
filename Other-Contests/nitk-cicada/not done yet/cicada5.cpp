//still to complete
//Group Captain Meghana's Dream

#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

#define pb push_back
#define mp make_pair
#define ll long long
#define MOD 1000000007
const int MAX=1e5+5;
using namespace std;

// ll n,m,i,j,k;
ll a[1000005];
ll t,l,r,x,i,j;

void sieve(){
	a[0]=a[1]=1;

	for(i=0;i<=sqrt(1000000);i++){
		if(a[i]==0){
			v.pb(i);
			for(j=2*i;j<=MAX;j+=i){
				a[j]=1;
			}
		}
	}
	for(i=sqrt(1000000)+1;i<1000000;i++){
		if(a[i]!=0)
			v.pb(i);
	}

}

// int divisors(int x) {
//     int limit = x;
//     int numberOfDivisors = 0;

//     if (x == 1) return 1;

//     for (int i = 1; i < limit; ++i) {
//         if (x % i == 0) {
//             limit = x / i;
//             if (limit != i) {
//                 numberOfDivisors++;
//             }
//             numberOfDivisors++;
//         }
//     }

//     return numberOfDivisors;
// }


int main(){

	scanf("%lld",&t);
	sieve();
	while(t--){



		int flag=0;
		ll divnum=0;
		int counttotal=0,num=-1;
		scanf("%lld%lld%lld",&l,&r,&x);

		for(i=l;i<=r;i++){
			
			if(a[i]==0){
				counttotal++;
				
				if(counttotal==x && flag==0){
					num=i;
					flag=1;
				}

			}

		}

		for(i=1;i<sqrt(counttotal);i++){
			if(counttotal%i==0)
			divnum++;
		}
		divnum*=2;

		if((counttotal % (int)sqrt(counttotal)==0) && (sqrt(counttotal)-floor(sqrt(counttotal)) ==0) )
			divnum+=1;

		// divnum=// findout number of divisors for counttotal

		printf("%d %lld\n",num,divnum);

	}

return 0;	
}
