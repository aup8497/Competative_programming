// this is a very nice and important problem
// completed successfully

#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <string.h>
#include <algorithm>

#define pb push_back
#define mp make_pair
#define ll long long
#define MOD 1000000007
const int MAX=1e5+5;
using namespace std;

ll n,m,i,j,k;
int a[200005];
int b[200005];
string t,p;

bool check(int mid){


	for (i = 0; i < n; ++i)
	{
		b[i]=1;
	}

	for(i=1;i<mid;i++){
		b[a[i]-1]=0;
	}

	j=0;
	for(i=0;i<n;i++){
		if( t[i]==p[j] && b[i]==1 && j<m )
			j++;
	}

	if(j==m)
		return 1;
	else
		return 0;

}


int main(){

	cin >> t >> p ;
	n=t.length();
	m=p.length();
	for (int i = 1; i <=n ; ++i)
		cin >> a[i];
	int ans=0,flag=0;
	int l=1,h=n;
	while(l<=h){
		int mid=(l+h) >> 1;
		if(check(mid)){
			ans=max(ans,mid);
			l=mid+1;
			flag=1;
			// cout << "came here mid=" << mid <<endl;
		}else{
			h=mid-1;
		}
	}

	cout << ans-1 << endl;


return 0;	
}
