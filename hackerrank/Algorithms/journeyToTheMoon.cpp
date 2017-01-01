//partial output;

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

int visited[MAX]={0},parent[MAX];
std::vector<int> g[MAX];
int main()
{ 
    int N, I;
    cin >> N >> I;
    vector<vector<int> > pairs(N);
    for (int i = 0; i < I; ++i) {
        int a, b;
        cin >> a >> b;

    	if(visited[a]==0 && visited[b]==0 ){
    		visited[a]=visited[b]=1;
    		parent[a]=a;
    		parent[b]=a;
    		g[a].pb(a);
    		g[a].pb(b);
    	}else if( visited[a]==0 && visited[b]!=0 ){
    		visited[a]=1;
    		parent[a]=parent[b];
    		g[parent[b]].pb(a);
    	}else if (visited[a]!=0 && visited[b]==0)
    	{
    		visited[b]=1;
    		parent[b]=parent[a];
    		g[parent[a]].pb(b);
    	}else{
    		if(parent[a]!=parent[b]){
    			for(ll j=0;j<g[parent[b]].size();j++){
    				g[parent[a]].pb(g[parent[b]][j]);
    			}
    		}
    		g[parent[b]].clear();
    	}
    } 
//for testing purpose
    // for(ll i=0;i<N;i++){
    // 	for( ll j=0;j<g[i].size();j++){
    // 		cout << g[i][j] << " " ;
    // 	}
    // 	cout << endl;
    // }


    long long result = 0,sumf=0,sizeOfVisited=0,sizeOfUnvisited=0;
    
	for (ll i = 0; i <N; ++i)
	   {	if(visited[i]){
	   		sumf=0;
	   		for(ll j=i+1;j<N;j++){
	   			sumf+=g[j].size();
	   		}
	   		sumf*=g[i].size();
	   		result+=sumf;
	   	}
	   }   
    
    for (ll i = 0; i < N; ++i)
    {
    	sizeOfVisited+=g[i].size();
    	if(visited[i]==0){
    		sizeOfUnvisited+=1;
    	}
    }
    result+=(sizeOfUnvisited*sizeOfVisited);
    result+=(sizeOfUnvisited*(sizeOfUnvisited-1))/2;

    cout << result << endl;
    return 0;
}
