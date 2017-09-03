#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,i;

int main(){

	int t;
	cin >> t;
	while(t--){
		cin >> n;
		int flag1=0,flag2=0,flag3=0;
		std::vector<int> v(n);
		for(i=0;i<n;i++)
			cin >> v[i];
		std::unordered_map<int, int> m;
		m.clear();


		// cout << "the vector is " << endl;
		// for(auto z: v)
		// 	cout << z << endl;
			// cout << flag1 << flag2 << flag3;

		for(i=0;i<n-1;i++){

			if(v[i]>v[i+1]){
				flag1=1;
			}

			if(m[v[i]]==1){
				// cout << "repeat" << v[i] << " " << m[v[i]] << endl; 
				flag2=1;
			}else{

				// cout << "came here for m[v[i]]= " << v[i] << endl;
				m[v[i]]=1;
			}

			if(v[i]>n || v[i]<1)
				flag3=1;
		}

		if(n!=1)
			if(m[v[n-1]]){
				// cout << "repeat" << v[i] << " " << m[v[i]] << endl; 
				flag2=1;
			}

			// cout << flag1 << flag2 << flag3;

		if(flag1==1 && flag2==0 && flag3==0)
			cout << "Beautiful" << endl;
		else
			cout << "Ugly" << endl;
	}

return 0;	
}