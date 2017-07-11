// Create your own template by modifying this file!
#include <bits/stdc++.h>
#define ll long long
#define MAX 10007
using namespace std;

#ifdef DEBUG
     #define debug(args...)            {dbg,args; cerr<<endl;}
#else
    #define debug(args...)              // Just strip off all debug tokens
#endif

struct debugger
{
    template<typename T> debugger& operator , (const T& v)
    {    
        cerr<<v<<" ";    
        return *this;    
    }
} dbg;

ll n,m,i,j,k,x,res=0,sum=0;
int a[MAX],b[MAX];
std::vector<int> v;

int main(){

	int zz=0;
	cin >> n >> m ;
	for (i = 0; i < m; ++i)
	{
		cin >> k;
		std::map<int, int> map;
		map.clear();
		int flag=0;
		for(j=0;j<k;j++){
			cin >> x;
			map[x]=1;
			if(map[-x]==1)
				flag=1;
		}
		if(flag==1){
			// cout << "inc" << i << " " ;
			zz++;
		}


	}
		if(zz==m)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;

return 0;	
}
