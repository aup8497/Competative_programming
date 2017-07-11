//try to complete this right now.This is still incomplete


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
#include<string.h>

ll n,m,i,j,k,x,res=0,sum=0;
int a[MAX],b[MAX];
std::vector<int> v;

int main(){

	string s;

	cin >> s;

	string rev=s;
	reverse(rev.begin(), rev.end());
	int xrev = stoi(rev.substr(3,2));

	// int = stoi( reverse( s.substr(0,2).begin() , s.substr(0,2).end() ) );
	int x= stoi(s.substr(0,2));
	int y= stoi(s.substr(3,2));

	int res=0;

	while(true){

		// cout << "came here" << endl;
		if( x%10<6 && xrev<60){

			if(x==23 && y>32){
				cout << 60-y << endl;
				exit(0);
			}

			if(xrev>=y){

				cout << res+xrev-y << endl;
				exit(0);

			}else{

				cout <<  res+xrev+60-y << endl;
				exit(0);
			}
			// else{
			// 	ans+=60;
			// 	x++;
			// }
		}

		// cout << "x=" << x << " ";
		// cout << "xrev=" << xrev << " y= " << y << " res= " << res << endl ;


		x++;
		res+=60;
		if(x<10)
		rev=to_string(x*10);
		else			
		rev=to_string(x);
		reverse(rev.begin(), rev.end());

		// cout << "rev=" << rev;

		xrev=stoi(rev);


		// cout << "x=" << x << " ";
		// cout << "xrev=" << xrev << " y= " << y << " res= " << res << endl ;

		// cout << endl;

	}		

return 0;	
}
