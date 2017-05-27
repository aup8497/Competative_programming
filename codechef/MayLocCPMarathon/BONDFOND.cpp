#include <bits/stdc++.h>
#include <math.h>
#define ll long long
#define MAX 100007
// #include <limit.h>
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;
int a[MAX],b[MAX];
std::vector<int> v;

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n ;
	
			for(i=0;i<60;i++){
				if(i==0){
					// flag=1;
					res=abs(pow(2,i)-n);
				}else{
					res=min(res,(long long)abs(pow(2,i)-n));
				}
			}
				cout << res << endl;
	}

return 0;	
}