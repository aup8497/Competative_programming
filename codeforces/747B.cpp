#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
const int MAX=1e5+5;
#define ll long long
using namespace std;
#define pb push_back
char a[MAX];

int count12[4];
int main(){
 	
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
	cin >> a[i] ;
	}

	if(n%4 != 0){
		cout << "===" << endl;
	}
	else{
		count12[0]=0;
		count12[1]=0;
		count12[2]=0;
		count12[3]=0;

		for(int i=0;i<n;i++){
			if(a[i]=='A'){
				count12[0]++;				//cout << "came to A" ; 

			}else if(a[i]=='C'){
				count12[1]++;				//cout << "came to C" ; 

			}else if(a[i]=='G'){
				count12[2]++;				//cout << "came to G" ; 

			}else if(a[i]=='T'){
				count12[3]++;				//cout << "came to T" ; 

			}
		}
		// cout << count12[0]<< count12[1]<< count12[2]<<count12[3];
		if(count12[0] > n/4 || count12[1] > n/4 || count12[2]>n/4 ||count12[3]> n/4){
			cout << "===";
				// cout << "came to 1" ; 
		}
		
		else{
			int d=n/4;
			for(int i=0;i<n;i++){
				if(a[i]=='?'){
					if(count12[0]<d){
						a[i]='A';
						count12[0]++;
					}else if(count12[1]<d){
						a[i]='C';
						count12[1]++;
					}else if(count12[2]<d){
						a[i]='G';
						count12[2]++;
					}else if(count12[3]<d){
						a[i]='T';
						count12[3]++;
					}
				}
			
			}
		
			cout << a << endl;
		}
	
	} 	

}
