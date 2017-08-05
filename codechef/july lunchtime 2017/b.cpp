/*
#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;
int a[MAX],b[MAX];
std::vector<int> v;

int main(){

	int t;
	cin >> t;

	while(t--){

		cin >> n;
		std::vector<int> v(n);
		for(i=0;i<n;i++)
			cin >> v[i];

		sort(v.begin(), v.end());

		for(i=0;i<n;i++){
			if(v[i]|v[i+1]==v[i+1]){
				cnt++;
			}else{

				cnt=1;
			}
		}

	}

return 0;	
}
*/

#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;
int a[MAX],b[MAX];
std::vector<int> v;

int main(){

	int t;
	cin >> t;

	while(t--){

		cin >> n;
		std::vector<int> v(n);
		for(i=0;i<n;i++)
			cin >> v[i];

		ll cnt=0;
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if((v[i]|v[j])==max(v[i],v[j]))
					cnt++;
			}
		}
		cout << cnt << endl;
	}

return 0;	
}