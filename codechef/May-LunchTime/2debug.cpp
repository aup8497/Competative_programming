//this solution is incomplete

#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
#define MOD 1000000007
using namespace std;

ll n,m,i,k,x,res=0,sum=0,zz;
ll a[MAX],mn[MAX],cost[MAX];
std::vector<ll> v[MAX];

bool visited[MAX]={false};

void dfs(int i){

int j;
	for(j=0;j<v[i].size();j++){
		cout << "j=" << j << endl;
		if(visited[v[i][j]]==false){
			visited[v[i][j]]=true;
			dfs(v[i][j]);
			res=a[v[i][j]];
			for(zz=0;zz<v[v[i][j]].size() ; zz++){
				res=min(res,mn[v[v[i][j]][zz]]);
			}
			mn[v[i][j]]=min( a[v[i][j]] , res );
			cout << "assigning min of " << v[i][j] << "is" <<  mn[v[i][j]] << endl;
		}
	}
}

int main(){
int j;
	cin >> n ;

	// for(i=0;i<n;i++)
	// 	mn[i]=MOD;

	for(i=1;i<n;i++){
		int x;
		cin >> x;
		// parent[i]=x-1;
		v[x-1].push_back(i);
	}
		// mn[]=min(mn[],)

	for(i=0;i<n;i++)
		cin >> a[i] ;

	mn[0]=a[0];
	//call dfs
	visited[0]=true;
	dfs(0);

	queue<int> q;

	// cout << "front of teh queue is " << q.front() << q.size() << endl;

	q.push(0);
	mn[0]=a[0];
	cost[0]=a[0];
	// cout << "front of teh queue is " << q.front() << q.size() << endl;

	// cout << "front of teh queue is " << q.front() << endl;

	// for(i=0;i<n;i++){
	// 	for(j=0;j<v[i].size();j++){
	// 		cout << v[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	

	while(!q.empty()){
		int u = q.front();
		q.pop();

		// cout << "queue size" << q.size() << endl;

		for(j=0;j<v[u].size();j++){
			q.push(v[u][j]);
			cost[v[u][j]]=cost[u]+mn[v[u][j]];
			
			cout << "cost of " << v[u][j] << " is " << cost[v[u][j]] << endl;  
		}
	}

	// for(i=0;i<n;i++){
	// 	cout << mn[i] << " " ;	
	// }

	for(i=0;i<n;i++){
		cout << cost[i] << " " ;	
	}

}