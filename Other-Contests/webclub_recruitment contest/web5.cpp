#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,y,res=0,sum=0;

int parent[MAX],rankh[MAX];

void initialise(int n){
	for(i=0;i<n+1;i++){
		parent[i]=i;
		rankh[i]=0;
	}
}


int find(int x){
	while(x!=parent[x])
		x=parent[x];
	return x;
}

void make_union( int x,int y ){

	if( rankh[ find(x) ] > rankh[ find(y) ] )
		parent[find(y)] = find(x);
	else if( rankh[find(x)] > rankh[find(y)] )
		parent[find(y)] = find(x);
	else{
		parent[find(y)] = find(x);
		rankh[find(x)]++;
	}

}
int main(){

	cin >> n >> m ;
	initialise(n);
	for(i=0;i<m;i++){
		cin >> x >> y;
		make_union(x,y);
	}

	std::vector<int> v(n+1);
	// cout << "parents values ";
	for(i=1;i<=n;i++){
		// cout << find(i) << " " ;
		v[parent[i]]++;
	}
	sort(v.begin(), v.end());

	int res=0;
	for(i=0;i<n+1;i++){
		if(v[i]!=0)
			res++;
	}

	cout << res << endl;
	for(i=0;i<n+1;i++){
		if(v[i]!=0)
			cout << v[i] << " ";
	}

return 0;	
}
