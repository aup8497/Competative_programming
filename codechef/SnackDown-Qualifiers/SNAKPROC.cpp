#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m,i,j,k,t;

int main(){

	cin >> t;
	while(t--){
		string s;
		cin >> n;
		cin >> s;
		int flag=0;
		
		for(i=0;i<n;i++){
			if( s[i] == 'H' ){
				if(flag==0){					
					flag=1;
				}else{
					flag=555;
					break;
				}
			}
			if( s[i] == 'T' ){
				if(flag==1){
					flag=0;
				}else{
					flag=555;
					break;
				}
			}
		}

		if(flag!=0)
			cout << "Invalid" << endl;
		else
			cout << "Valid" << endl;


	}


return 0;	
}