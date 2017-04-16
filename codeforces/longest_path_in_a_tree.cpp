#include <iostream>
#include <cstdlib>
#include <vector>
#include <cmath>
#define pb push_back
#define mp make_pair
#define ll long long 
using namespace std;
std::vector<int> v[1000];
ll i,n,m,j,x,y;
int visited[1000],node_value[1000];
int cnt=0,res=0;

bool condition_is_true(int i,int j){
	if(abs(node_value[i]-node_value[j])==1)
		return true;
	else
		return false;
}

void dfs(int i){
	
	for(j=0;j<v[i].size();j++){
		if( condition_is_true( i , v[i][j] ) && visited[v[i][j]]==0 ){
			visited[v[i][j]]=1;
			cnt++;
			res=max(res,cnt);
			dfs(v[i][j]);
			cnt--;
			//unmarking the node v[i][j] after returning (coming out of the recursion-as this will not be contained in the path) 
			visited[v[i][j]]=0;
		}
	}

}

int main(){
	cin >> n >> m;

	//node values
	for(i=0;i<n;i++)
		cin >> node_value[i];

	//edges
	for (int z = 0; z < n; ++z){
		cin  >> x >> y ;
		v[x].pb(y);
	}

	//running dfs starting from each node
	for(int z=0;z<n;z++){
		visited[z]=1;
		dfs(z);
	}

	cout << "max of all the count is " << cnt << res;

}
