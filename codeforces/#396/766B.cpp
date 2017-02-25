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

ll n,m,i,j,k;
ll a[MAX];

int main(){
int flag=0;
	cin >> n  ;

	for(i=0;i<n;i++)
		cin >> a[i];

	sort(a,a+n);

	for(i=2;i<n;i++){
		if(a[i]<a[i-1]+ a[i-2]){
			flag=1;
			break;			
		}
	}

	if(flag==1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;


return 0;	
}
