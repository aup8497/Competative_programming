#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;
int a[MAX],b[MAX];
std::vector<int> v;

int main(){

	cin >> n >> m;

	string s,t;

	cin >> s >> t;

	int globalmn=INT_MAX,mn;
	std::vector<int> glove;

	for(i=0;i<=m-n;i++){
		// if(s[0]==t[i])
		mn=0;
		std::vector<int> v;
		for(j=i;j<i+n;j++){
			if(s[j-i]!=t[j]){
				mn++;
				v.push_back(j-i+1);
			}
		}
		if(mn<globalmn){
			globalmn=mn;
			glove=v;
		}
	}

	cout << glove.size() << endl;
	for(i=0;i<glove.size();i++)
		cout << glove[i] << " " ;

return 0;	
}