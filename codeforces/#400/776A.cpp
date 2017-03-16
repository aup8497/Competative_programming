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

int main(){
	string s1,s2,x,y,murdered,safe;
	cin >> s1 >> s2 ;
	cin >> n ;

	x=s1;
	y=s2;
	cout << s1 << " " << s2 << endl;
	for(i=0;i<n;i++){
		cin >> murdered >> safe;
		// murdered=x;
		// safe=y;
		if(x==murdered){
			cout << y << " " <<  safe << endl;
			x=y;
			y=safe;
		}
		else{
			cout << x << " " << safe << endl;
			y=safe;
		}

	}


return 0;	
}
