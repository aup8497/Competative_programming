#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,zz,res=0,sum=0;
std::vector<int> v;

int main(){

	string s="";
	int cnt=1;
	cin >> n ;
	if(n==0){
		cout << "a" << endl;
		exit(0);
	}
	while(n>1){
		// cout << "n==" << n << endl;

		for(i=1;i<sqrt(n*2)+1;i++){
			// cout << "i=" << i << " ";
			if( i*(i+1)/2 >= n){
				// cout << "n= " << n << "i=" << i << endl;
				for(j=0;j<i;j++){
					s+=('a'+(cnt));
					// cout << s << endl;
				}
				// cout << s << endl;
				cnt++;
				// cout << "didnot come here";
				break;
			}
		}
		n-=(i*(i-1)/2);
	}
	if(n==1){
		s+=('a'+(cnt++));
		s+=('a'+(--cnt));
	}

	cout << s << endl;

return 0;	
}