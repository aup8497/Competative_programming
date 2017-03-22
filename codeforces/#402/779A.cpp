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
int a[105],b[105],cnt1[10],cnt2[10];
int main(){
	int count=0;

	cin >> n ;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		cnt1[a[i]]++;
	}
	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
		cnt1[b[i]]--;
	}

	int flag=0;
	for (int i = 1; i < 6; ++i)
	{
		if(cnt1[i]%2 !=0 )
			flag=1;
		else{
			count+=abs(cnt1[i]);
		}
	}
	count/=4;

	if(flag==1)
		cout << -1 << endl;
	else{
		cout << count<< endl;

	}

return 0;	
}
