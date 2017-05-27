#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <set>

#define pb push_back
#define mp make_pair
#define ll long long
#define MOD 1000000007
const int MAX=1e5+5;
using namespace std;

ll n,m,i,j,k,res,pos;
ll a[MAX],rem,mul[MAX];


int main(){

	cin >> n >> k ;
	a[0]=1;
	for(i=1;i<=n;i++)
		cin >>  a[i];
	sort(a+1,a+n+1);
	mul[0]=1;
	for(i=1;i<=n;i++)
		mul[i]=a[i]*mul[i-1];

	for(i=1;i<=n;i++){
		rem=mul[i];
		pos=i-1;
		// for(j=i;j>=0;j--){
			while(rem>k && pos!=-1){
				// cout << "came in here for i="<< i << endl;
				rem/=a[pos];
				pos--;
			}

			if(pos==-1)
				continue;
			else
				res+=pow(2,pos);

			// cout << "for a[i]=" <<  a[i] <<  "pos= " << pos << "res 	" << pow(2,pos) << endl;

		// }
	}

	cout << res << endl;
return 0;	
}
