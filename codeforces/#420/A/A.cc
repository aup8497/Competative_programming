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

ll n,m,i,j,k,x,val,y,res=0,sum=0;
int a[51][51],b[MAX];
std::vector<int> v;

int main(){

	cin >> n ;

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin >> a[i][j];
		}
	}

	int notFlag=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			val=a[i][j];
			if(val==1)
				continue;
			int flag=0;
			for(x=0;x<n;x++){
				for(y=0;y<n;y++){
					if(a[i][j]==a[i][x]+a[y][j])
						flag=1;
				}
			}
			if(flag==0)
				notFlag=1;
		}
	}
	if(notFlag==1)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;

return 0;	
}
