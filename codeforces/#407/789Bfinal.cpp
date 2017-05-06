#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <map>

#define pb push_back
#define mp make_pair
#define ll long long
#define MOD 1000000007
const int MAX=1e5+5;

using namespace std;

ll n,m1,i,j,k,a,r,l,x,cur,cnt;
std::map<int, int> m;
int main(){

	cin >> a >> r >> l >> m1;

	for(i=0;i<m1;i++){
		cin >> x;
		m[x]++;
	}

	cur=a;
	cnt=0;

	if(abs(a)>l){
		cout << 0  << endl;
		exit(0);
	}else if(a==0){
		if(m[0]!=0)
		cout << 0 << endl;
		else
			cout << "inf" << endl;
		exit(0);
	}

	if(r==1){
		if(m[a]==0)
			cout << "inf" << endl;
		else
			cout << 0 << endl;
	}else if(r==-1){
		if(m[a]!=0 && m[-a]!=0)
			cout << 0 << endl;
		else
			cout << "inf" << endl;
	}else if(r==0){
		if(m[a]==0)
			cnt=1;
		else
			cnt=0;

		if(m[0]==0)
			cout << "inf" << endl ;
		else
			cout  << cnt << endl;
	}else{
		while(abs(cur)<=l){
				if(m[cur]==0)
					cnt++;
				cur*=r;
			}
		cout << cnt << endl;
	}


	


return 0;	
}
