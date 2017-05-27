#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;
ll r[10000],y[10000];
std::vector<int> v;

int main(){
	ll xc,yc,xzzz,lpos,rpos;
	// cin >> n >> k ;

	while(true){
		cin >> xc >> yc;
		if(xc==-1 && yc==-1)
			break;

		cin >> n;

		int res=0,cnt=0;

		for(i=0;i<n;i++)
			cin >> xzzz >> y[i] >> r[i];

		for(i=0;i<n;i++){
			lpos=y[i]-r[i];
			rpos=y[i]+r[i];

			if(lpos<0)
				lpos=0;
			if(rpos>yc)
				rpos=yc;

//for lpos
				cnt=0;
				for(i=0;i<n;i++){
					if( lpos<=y[i]+r[i] && lpos>=y[i]-r[i] )
						cnt++;
				}

				res=max(cnt,res);

//for rpos
				cnt=0;
				for(i=0;i<n;i++){
					if( rpos<=y[i]+r[i] && rpos>=y[i]-r[i] )
						cnt++;
				}

				res=max(cnt,res);
		}

		cout << res << endl;

	}



return 0;	
}