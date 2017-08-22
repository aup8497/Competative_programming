#include <bits/stdc++.h>
using namespace std;

#define ll long long 

int main(){

	ll n,x,y,i,flag=0,sum=0,prev=-1;
	cin >> n;
	std::vector<pair<ll,ll> > v;

	for(i=0;i<n;i++){
		cin >> x >> y;
		v.push_back(make_pair(x,1));
		v.push_back(make_pair(y+1,-1));
	}

	sort(v.begin(), v.end());

	for(i=0;i<2*n;i++){
		sum+=v[i].second;
		if(sum>2){
			flag=1;
			break;
		}
	}

	if(flag==0){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

return 0;	
}