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
int a[MAX];
ll present[MAX];
ll cur;
int main(){

	cin >> n ;
	cur=n;
	for(i=0;i<n;i++){

		cin >> a[i];
		present[a[i]]=1;

		while(present[cur]){
			cout << cur ;
			cur--;
			if(present[cur])
				cout << " ";
		}

		cout << endl;

	}

return 0;	
}

