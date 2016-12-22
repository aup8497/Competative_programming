#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string.h>
const int MAX=1e5+5;
#define ll long long
using namespace std;
#define pb push_back



int main(){
 	
	int n,workingNo=0;
	ll q,z,i;
	ll a[MAX],IDtotal,t1,num,t2;
	cin >> n >> q;

	memset(a,0,sizeof a);

	for(z=0;z<q;z++){
		cin >> t1 >> num >> t2 ;
		workingNo=0;
		IDtotal=0;
		for(int x=0;x<n;x++){
			if(a[x]<t1)
				workingNo++;
		}
		if(workingNo<num){
			cout << "-1" << endl;
		}else{
			for(i=0;i<n;i++){
				if(a[i]<t1 && num){//strictly greater than
					a[i]=t1+t2-1;
					num--;
					IDtotal+=i+1;
				}	
			}

			cout << IDtotal << endl;
		}

	}
	
	 	

}
