#include <stdio.h>
#include <iostream>
#include <string.h>
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
	ll t;
	cin >> t ;

	while(t--){
		cin >> n;
		int flag=0;
		ll countSuperheroes=1,countVillans=1;
		
		for(i=0;i<n;i++){
			char s[200];

			cin >> s ;
			if(strstr(s,"man") || strstr(s,"woman"))
				countSuperheroes++;
			else
				countVillans++;

			if(countVillans>=countSuperheroes+3 && flag==0){
				flag=1;
			}
			if(countSuperheroes>=countVillans+2  && flag==0){
				flag=2;
			}
			// if(flag!=0)
			// 	cout << s << endl;
		}
		if(flag==0)
			cout << "draw" << endl ;
		if(flag==1)
			cout << "villains" << endl ;
		if(flag==2)
			cout << "superheroes" <<endl;

	}
return 0;	
}