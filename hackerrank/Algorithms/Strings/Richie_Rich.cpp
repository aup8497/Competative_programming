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
	ll countcompare=0;
	std::vector<int> v;
	cin >> n >> k ;
	string a;
	cin >> a;
	int mid=(n+1)/2;

	// cout << " mid= " << mid << endl;

	if(n==1){
		if(k==1){
			a[0]='9';
		}
	}else {
		for(i=0;i<mid;i++){
			if(a[i]!=a[n-1-i]){
				v.pb(i);
				countcompare++;
			}
		}

		// for(int it=0;it<v.size();it++){
		// 	cout << v[it] << endl; 
		// }

		if(countcompare>k){
			cout << -1 <<endl;
			exit(0);
		}

		int rem=k-countcompare;

		for(i=0;i<v.size();i++){
			int ma=max(a[v[i]],a[n-1-v[i]]); 
			a[v[i]]=ma;
			a[n-1-v[i]]=ma;		//this takes a[i]=48 +ma;

			// cout << "a[v[i]]= " << a[v[i]] << " a[n-1-v[i]]= " <<a[n-1-v[i]] << endl;  
		}

		 // cout << rem << endl;
		for(i=0;i<mid && rem>0;i++){
	//		cout << "came inside " ;
			if(  std::find(v.begin(), v.end(), i) != v.end()){
				a[i]=a[n-i-1]='9';
				// cout << "a[" << i << "] = " << a[i] << endl;
				rem-=1;
				// cout << a << endl;
			}else{
				if((a[i]!='9' && a[n-i-1]=='9')||(a[i]=='9' && a[n-i-1]!='9') ){
					rem-=1;
				a[i]=a[n-i-1]='9';

				}
				if(a[i]!='9' && a[n-i-1]!='9' && rem>1){
					rem-=2;
				a[i]=a[n-i-1]='9';
				// cout << "came here when a[i] was "<<a[i] <<  endl;
				}
				if(a[i]!='9' && a[n-i-1]!='9' && i==mid-1 && n%2==1 ){
					rem-=1;
				a[i]='9';
			
				}

			}
			 
		}
	
	}
		cout << a << endl;

return 0;	
}