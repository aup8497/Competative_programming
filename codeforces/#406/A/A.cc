// Create your own template by modifying this file!
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



ll n,m,i,j,k,x,res=0,sum=0;
int a,b,c,d;
std::vector<int> v;

int main(){

	cin >> a >> b;
	cin >> c >> d;

	// if(a%2==0 && c%2==0 && ((b%2==1 && d%2==0) || (b%2==0 && d%2==1)) ){
	// 	cout << "-1" << endl;
	// 	exit(0);
	// }

	int flag=0;
	for(i=0;i<=100;i++){
		x=b+(i*a);
		for(j=0;j<100;j++){

			if(d+c*j==x){
				cout << x << endl;
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
		// cout << x << endl;
	}	

	if(flag==0)
		cout << -1 << endl;



return 0;	
}