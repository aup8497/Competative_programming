//Note : this answer is still incomplete.

// 4.cpp
#include <bits/stdc++.h>
#define ll long long
#define MAX 500005
using namespace std;

ll n,m,i,j,k,x,y,res=0,sum=0;
std::vector<int> v[MAX];
std::vector<int> visited(MAX);
std::vector<int> dp(MAX);
std::vector<int> visited1(MAX);

int dfs(int i){

	if(visited1[i]){
		return dp[i];
	}else{
		cout << "came here i= " << i << endl;
		visited[i]=1;
		sum=0;
		for(j=0;j<v[i].size();j++){
			if(!visited[v[i][j]]){
				sum+=dfs(v[i][j]);
			}
		}
		dp[i]=sum;
		visited1[i]=1;
		cout << "returning " << 1+sum << " when i=" << i << endl;
		return 1+sum;
	}

}

int main(){

	int i;
	cin >> n >> m;
	for(i=0;i<m;i++){
		cin >> x >> y;
		v[y].push_back(x);
		v[x].push_back(y);
	}	


	for(i=1;i<=n;i++){
		// if(i==1)
			x = dfs(i);
	}

	for(i=1;i<=n;i++){
		cout << dp[i] << endl;
	}

return 0;	
}