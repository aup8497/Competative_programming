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

ll n,m,j,k;
int visited[MAX]={0};
std::vector<int> v[MAX];

int mx=0,res=0;

int dfs(int n1){
	int i;
	visited[n1]=1;
	//checking for adjacent elements
	for(i=0;i<v[n1].size();i++){
		if(visited[ v[n1][i] ]==0){
			mx++;
			dfs(v[n1][i]);
		}
	}

}

int main(){
	cin >> n >> m ;
	int i;

	for(i=0;i<m;i++){
		int x,y;
		cin >> x >> y;
		v[x-1].pb(y-1);
		v[y-1].pb(x-1);
	}

	// cout << "pritning elemts \n";
	// for(i=0;i<n;i++){
	// 	for(j=0;j<v[i].size();j++)
	// 		cout << v[i][j] << " " ;
	// 	cout << endl;
	// }

	for(i=0;i<n;i++){
		mx=1;
		if(visited[i]==0){
			// cout << "going into i= " << i  << endl;			
			dfs(i);
		}
		// cout << "max for i= " << i << " is " << mx  << endl;
		res=max(res,mx);
	}

	cout << res << endl;

return 0;	
}
