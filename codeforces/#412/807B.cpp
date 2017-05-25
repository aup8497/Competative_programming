#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>

#define pb push_back
#define mp make_pair
#define ll long long
#define MOD 1000000007
const int MAX=1e5+5;
using namespace std;

ll n,m,i,j,k;

int main(){
	int p,x,y,s;
	cin >> p >> x >> y;

	int temp=x;
	while(temp-50>=y){
		temp-=50;
	}
	int flag=1;

	while(flag){

		map<int, int> m;
		s=temp;
		i=(s/50)%475;
		
		// cout << "for s = " << s << endl;

		for(j=0;j<25;j++){
			i=(i*96+42)%475;
			m[26+i]++;
			// cout << 26+i << " " ;
		}
		if(m[p]!=0){
			// cout << "  m[p] = " <<  m[p] << endl;
			break;
		}
		else{
			temp+=50;
		}

	}

	if(temp<=x)
		cout << 0 << endl;
	else
		cout << (temp-x+99)/100;

return 0;	
}
