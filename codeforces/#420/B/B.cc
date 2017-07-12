// Create your own template by modifying this file!
#include <bits/stdc++.h>
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

#define ll long long
#define MAX 100007

ll n,m,i,j,k,x,y,b,res=0,sum=0;
std::vector<int> v;

int main(){

	cin >> m >> b;

	// x=(int)(ceil((float)b/2)*m);
	// y=(int)(b/2);
	// // cout << x << ' ' << y << ' ' << endl;
	// res=(x+1)*(y+1)*(x+y)/2;

	for(i=0;i<=b;i++){
		y=i;
		x=(int)((b-y)*m);
		sum=(x+1)*(y+1)*(x+y)/2;
		res=max(res,sum);
	}

	cout << res << endl;

return 0;	
}