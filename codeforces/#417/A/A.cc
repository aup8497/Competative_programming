#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
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


// ll n,m,i,j,k,x,res=0,sum=0;
// int a[MAX],b[MAX];
// std::vector<int> v;

int main(){ 

	int flag=0;
	int a[4][4],i;

	for(int i=0;i<4;i++){

		// int x,y,z,a;

		cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];

		// if( ((x==1) || (y==1) || (z==1)) && (a==1) )
		// 	flag=1;		
	}

	for(i=0;i<4;i++){
		if( ( a[i][1] || a[i][2] || a[i][0] || a[((i+1)%4)][0] || a[((i+2)%4)][1] || a[((i+3)%4)][2] ) && a[i][3] ){
			flag=1;
			// cout << "i="  << i << "a[0][3] = " << a[i][3] ;
		}
	}

	if(flag==1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;


return 0;	
}
