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

char a[MAX];
int main(){
	int n,countres=0;
	cin >> n ;
	cin >> a;

	for(int i=0;i<n-1;i++){
		if(a[i]=='0' && a[i+1]=='1' && a[i+2]=='0' ){
			countres++;
			i+=2;
		}
	}

	cout << countres << endl ;
	


return 0;	
}
