#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>

#define pb push_back
#define mp make_pair
#define ll long long
#define MOD 1000000007
const int MAX=1e5+5;
using namespace std;

ll num;

ll getFib(int n)
{
    ll fib[2][2]= {{1,1},{1,0}},ret[2][2]= {{1,0},{0,1}},tmp[2][2]= {{0,0},{0,0}};
    int i,j,k;

    while(n)
    {
        if(n&1)
        {
            memset(tmp,0,sizeof tmp);
            for(i=0; i<2; i++) 
            	for(j=0; j<2; j++) 
            		for(k=0; k<2; k++)
                        tmp[i][j]=( (tmp[i][j]%MOD) + ( ret[i][k]%MOD ) * ( fib[k][j]%MOD ) )%MOD;
            
            for(i=0; i<2; i++) 
            	for(j=0; j<2; j++) 
            		ret[i][j]=tmp[i][j]%MOD ;
        }

        memset(tmp,0,sizeof tmp);  
        for(i=0; i<2; i++) 
        	for(j=0; j<2; j++) 
        		for(k=0; k<2; k++)
                    tmp[i][j]=(tmp[i][j]%MOD + (fib[i][k]%MOD) * (fib[k][j]%MOD) )%MOD;
        
        for(i=0; i<2; i++) 
        	for(j=0; j<2; j++) 
        		fib[i][j]= (tmp[i][j] %MOD) ;
      
        n/=2;
    }
    return (ret[0][1]%MOD) ;
}

int main(){

	int t;
	cin  >> t;

	while(t--){

		cin >> num;

	    if(num==1){
	        cout << 0 << endl;
	    }else{
	        cout << getFib(num+2) << endl;        
	    }

	}

return 0;
}

