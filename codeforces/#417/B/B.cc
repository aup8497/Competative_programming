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


// #include <bits/stdc++.h>
#define ll long long
#define MAX 100007
// using namespace std;

int n,m,i,j,k,x,res=0,sum=0;
int a[105][105],bmx[105],bmn[105];
std::vector<int> v;

int dp(int num ,int z){

int res;

	if(num==n-1){
		if(z==-1)
			res = 2*bmx[n-1];
		else
			res = m+1;
	}else{

		if(z==-1){
			res = min( m+2+dp(num+1,1) , bmx[num]*2+1+dp(num+1,-1) ) ;
		}
		else{
			res = min( m+2+dp(num+1,-1) , ((m+2)-bmn[num])*2+1+dp(num+1,1) );
		}
	}

	cout << "returned " << res << " at i = " << num << endl;
	return res;

}

int main(){

	cin >> n >> m ;
	string a[n+1];

	for(i=0;i<n;i++)
		cin >> a[i] ;

	for(i=0;i<n;i++){
		int maxj=0,minj=0,f=0;
		for(j=0;j<m+2;j++){
			if(a[i][j]=='1' && f==0){
				f=1;
				minj=j;
			}
			if( a[i][j]=='1' )
				maxj=j;
		}

		bmn[i]=minj;
		bmx[i]=maxj;

		// cout << " min[" << i << "]=" << bmn[i] << endl;
		// cout << " max[" << i << "]=" << bmx[i] << endl;
	}

	for(i=0;i<n;i++){

	}

	
	cout << min( bmx[0]+1+dp(1,-1) , m+2-bmn[0]+1+dp(1,1) ) << endl;


return 0;	
}