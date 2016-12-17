#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
const int MAX=1e5+5;
#define ll long long
using namespace std;

std::vector<int> graph[MAX];
bool isVisited[MAX];
ll toBeAdded=0;
int main(){
	
	std::vector<int> hometown; 	
	ll n,m,k;
	cin >> n >> m >> k;

	for(int i=0;i<n;i++){
		int z;
		cin >> z;
		hometown.push_back();
	}

	for(int i=0;i<m;i++){
		int x,y;
		cin  >> x >> y ;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
int max=0;
//loop for finding max
	for (int i = 0; i < hometown.size(); ++i)
	{
		if(max<graph[hometown[i]].size()){
			max=graph[hometown[i]].size();
			pos=hometown[i];
		}
	}
	 	
	for (int i = 0; i < hometown.size(); ++i)
	{
		if(hometown[i]!=pos){
			for(int j=0;j<graph[hometown[i]].size();j++){
				isVisted[graph[hometown[i]][j]]=true;
			}
			toBeAdded=toBeAdded+(nc2(graph[hometown[i]].size())- noOfEdgesInTheGraph(graph[hometown[i]]));
		}
	}

}

ll nc2(int ){

}