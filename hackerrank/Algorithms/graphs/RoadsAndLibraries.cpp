#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0,croad,clib;
int a[MAX],b[MAX];
int rankh[1000],parent[1000];

class edge{
	public:
		int u,v;
};


int findSet(int x){
	while(x!=parent[x])
		x=parent[x];
	return x;
}

void unionSet( int x,int y ){

	if( rankh[ findSet(x) ] > rankh[ findSet(y) ] )
		parent[findSet(y)] = findSet(x);
	else if( rankh[findSet(x)] > rankh[findSet(y)] )
		parent[findSet(y)] = findSet(x);
	else{
		parent[findSet(y)] = findSet(x);
		rankh[findSet(x)]++;
	}

}

int main(){

	cin >> n >> m >> croad >> clib ;
	
	for(i=0;i<n;i++){
		parent[i]=i;
		rankh[i]=0;
	}

	std::vector<edge> v(m);
	for(i=0;i<m;i++){
		int x,y,z;
		cin >> x >> y ;
		v[i].u=x-1;
		v[i].v=y-1;
		// v[i].w=z;
	}

	for(i=0;i<m;i++)
		if(findSet(v[i].u) != findSet( v[i].v ) ){
			unionSet( v[i].u , v[i].v );
	}

	set<int> s;
	for(i=0;i<n;i++){
		cout << "parent of " <<  i << " is " << findSet(i) << endl;
		s.insert(findSet(i));
	}

	cout << "the number of components is " << s.size() << endl;

return 0;	
}