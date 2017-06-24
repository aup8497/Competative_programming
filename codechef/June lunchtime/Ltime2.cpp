#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define ll long long
#define MOD 1000007
const int MAX=1e5+5;
using namespace std;

ll n,m,i,j,k;
ll c[MOD],w[MOD];

int main(){
	ll t;
	cin >> t;

	while(t--){

		cin >> n ;
		ll prefix[n];
		unordered_map<int,int> mp;
		for(i=0;i<n;i++){
			cin >> c[i];
			mp[c[i]]=0;
		}

		for(i=0;i<n;i++){
			cin >> w[i] ;
			if(i==0)
				prefix[0]=w[i];
			else
				prefix[i]=prefix[i-1]+w[i];

			// cout << prefix[i] << " " ;
		}

		k=0;
		i=0;
		j=0;

        while (i < n && j < n) {

            if(mp[c[j]]<=0){
            	mp[c[j]]++;

                k = max(k, prefix[j] - prefix[i] + w[i]);
                j++;
                // cout << "k=" << k << " when i=" << i << " and j= " << j << endl;
            }
            else {
            	// cout << "came2\n" ;
            	mp[c[i++]]--;
         	   }
        }
        
        cout << k << endl;

	}	


return 0;	
}