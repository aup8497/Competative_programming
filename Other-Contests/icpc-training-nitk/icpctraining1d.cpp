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
	int t,T;
	cin >> T;

	for(t=0;t<T;t++){
		cin >> n >> m;
		string a[n];

		for(i=0;i<n;i++){
			cin >> a[i];
		}
		int flag=0;
		int lasti=0,lastj=0;
		int firsti=0,firstj=0;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(a[i][j]=='*' && flag==0){
					firsti=i;
					firstj=j;
					flag=1;
				}

				if(a[i][j]=='*'){
					lasti=i;
					lastj=j;
				}

			}
		}

		int flag2=0;
		for(i=firsti+1;i<lasti;i++){
			for(j=firstj+1;j<lastj;j++){
				if(a[i][j]=='*'){
					printf("Case %d: Eight\n",t+1);
					flag2=1;
					break;
				}
			}
			if(flag2==1)
				break;
		}
		if(flag2==0)
			printf("Case %d: Zero\n",t+1);

	}

return 0;	
}
