#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0,cnt=0;

void read_input(vector<int> &v,int n,unordered_map<int,int> &m){
	for(int i=0;i<n;i++){
		cin >> v[i];
		m[v[i]]=1;
	}
}

int main(){

	cin >> n ;
	std::vector<int> v1(n),v2(n);
	unordered_map<int,int> hash;

	read_input(v1,n,hash);
	read_input(v2,n,hash);

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(hash[v1[i]^v2[j]])
				cnt++;
		}
	}

	if(cnt%2==0)
		cout << "Karen" << endl;
	else
		cout << "Koyomi" << endl;

	

return 0;	
}