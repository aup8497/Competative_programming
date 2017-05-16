#include<bits/stdc++.h>

using namespace std;

int main(){
	int t,n,m,x,j,i;
	
	cin >> t ;
	while(t--){
		int res=0;
		cin >> n >> m ;
		for(i=0;i<n;i++){
			int mn=101;
			for(j=0;j<m;j++){
				cin >> x;
				mn=min(mn,x);
			}
			res+=mn;
		}
		cout << res << endl;	
	}

}