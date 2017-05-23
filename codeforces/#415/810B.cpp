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

ll n,m,i,j,k,sum=0;
std::vector< ll > c;
ll a[MAX],b[MAX];

int main(){

	cin >> n >> k ;

	for(i=0;i<n;i++){
		cin >> a[i] >> b[i];
		
		sum+=min(a[i],b[i]);
		if(b[i]>a[i]){
			c.pb( min( (b[i]-a[i]) , a[i] ) );
		}
	}

	// cout << "sum = " << sum << endl; 

	sort(c.begin(),c.end());
	reverse(c.begin(),c.end());
	for(i=0;i<k && i<c.size();i++)
		sum+=c[i];

	// for(i=0;i<c.size();i++)
	// 	cout << c[i] << " ";

	cout << sum << endl;


return 0;	
}
