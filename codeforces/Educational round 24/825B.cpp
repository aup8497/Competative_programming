// this is hacked as I didnot check for bottomleft-toprght diagonal 

#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

int main(){

	int n=10,i,j,k;
	string a[11];
	// cin >> n >> k ;
	for(i=0;i<n;i++){
		// for(j=0;j<n;j++){
			cin >> a[i];
		// }
	}
	
	// cout << "came out";

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){

			int sum1=0,flag1=1;
			int sum2=0,flag2=1;
			int sum3=0,flag3=1;
			
			for(k=0;k<5;k++){

				if(i<=5){
					if(flag1 && a[i+k][j]!='O'){
						if(a[i+k][j]=='.'){
							if(flag1==2){
								flag1=0;
							}else{
								sum1++;
								flag1=2;
							}
						}else
							sum1++;
					}else{
						flag1=0;
					}
				}

				if(j<=5){
					if(flag2 && a[i][j+k]!='O'){
						if(a[i][j+k]=='.'){
							if(flag2==2){
								flag2=0;
							}else{
								sum2++;
								flag2=2;
							}
						}else
							sum2++;
					}else{
						flag2=0;
					}
				}

				if(i<=5 && j<=5){
					if(flag3 && a[i+k][j+k]!='O'){
						if(a[i+k][j+k]=='.'){
							if(flag3==2){
								flag3=0;
							}else{
								sum3++;
								flag3=2;
							}
						}else
							sum3++;
					}else{
						flag3=0;
					}
				}

			}

			// cout << sum1 << " " << sum2 << " " << sum3 << endl; 

			if(sum1==5 || sum2==5 || sum3==5){
				cout << "YES" << endl;
				exit(0);
			}
		}
	}


	cout << "NO" << endl;
	
	
return 0;	
}