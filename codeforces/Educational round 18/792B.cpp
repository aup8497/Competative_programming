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
	int count;
	cin >> n >> k ;
	ll zz;
	int visited[n+1]={0};
	// for(i=0;i<k;i++){
	// 	cin >> a[i];
	// }

	int pos=0;

	for(count=0;count<k;count++){
		cin >> zz;
		zz%=n-count;
		while(zz){
			pos++;
			pos=pos%n;
			if(visited[pos]==0){
				// cout << pos << " ";
				zz--;
			}

		}
			visited[pos]=1;
			pos%=n;
			cout  << pos+1  << " " ;
			pos=pos%n;

			pos++;
			pos=pos%n;

			while(visited[pos]==1){
				pos++;
				pos=pos%n;
			}


			// cout << endl << "leader" << pos+1 << endl;

	}


return 0;	
}
