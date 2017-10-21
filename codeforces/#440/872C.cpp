#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,t,x,res=0,sum=0;

int main(){

	cin >> t;	
	while(t--){
		cin >> n;
		if(n==0 || n==1 || n==2 || n==3 || n==5 || n==7 || n==11)
			cout << -1 << endl;
		else
		switch(n%4){
			case 0: cout << n/4 << endl;
					break;
			case 1: cout << (n/4)-1 << endl;
					break;
			case 2: cout << n/4 << endl;
					break;
			case 3: cout << (n/4)-1 << endl;
					break;
		}	
	}

return 0;	
}


// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24
// - - -   -   -        -     -           -