// 3.cpp

#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,mn=99999999999999999,sum=0;
std::vector<int> ind;

int main(){

	// cout << mn << endl;	

	cin >> n >> m >> k ;
	ll cnt=0;
	ll start,end,sz;
	std::vector<int> v(n);
	for(i=0;i<n;i++){
		cin >> v[i];
		if(v[i]==1){
			ind.push_back(i);
			cnt++;
		}
	}

	if(cnt<m)
		cout << -1 << endl;
	else{
		start = 0;
		end = m-1;
		cnt=0;
		sz=ind.size();
		sum=0;
		//initialising the sum
		for(i=0;i<m;i++){
			if(i==0)
				sum+=ind[0];
			else{
				cnt++;
				sum+=((ind[i]-ind[i-1])*cnt*k);
			}
		}
		start++;
		end++;
		mn = min(mn,sum);
		while(end!=sz){
			sum-=(ind[start-1]+((ind[start]-ind[start-1])*(k)));
			sum-=((ind[end-1]-ind[start])*k);
			sum+=ind[start];
			sum+=((ind[end]-ind[end-1])*k*(m-1));
			// sum+=ind[start];
			// cout << "subtracting " << ind[start-1]+((ind[start]-ind[start-1])*(k)) << " and " <<  (m-2)*k << endl; 
			// cout << "adding " << ind[start] << " and " <<  ((ind[end]-ind[end-1])*k*(m-1)) << endl; 
			mn = min(mn,sum);
		// cout << "mn=" << mn << endl;

			start++;
			end++;
		}
		cout << mn << endl;
	}


return 0;	
}