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

ll n,m,i,j,k,countfinal=0,countl=0,countu=0,disprev=0,dis=0;
string a;
int main(){

	cin >> n >> a ;

	for(i=0;i<n;i++){
		if(a[i]=='R')
			countl+=1;
		else if(a[i]=='L')
			countl-=1;
		else if(a[i]=='U')
			countu+=1;
		else if(a[i]=='D')
			countu-=1;

		disprev=dis;
		dis=abs(countu)+abs(countl);

		if(dis<disprev){
			countfinal++;
			countl=0;
			countu=0;
			dis=0;
			disprev=0;
			i-=1;
		}

	}

	cout <<countfinal+1 <<endl; 

return 0;	
}
