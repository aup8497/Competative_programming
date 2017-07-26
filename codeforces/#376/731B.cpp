#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;
int a[MAX],b[MAX];
std::vector<int> v;

int main(){

	cin >> n ;
	int flag=0,globalFlag=0;

	for(i=0;i<n;i++){
		cin >> x;
		if(flag==0){
			if(x%2!=0){
				flag=1;
			}
		}else{
			if(x>0 ){
				if(x%2==1)
					flag=0;
			}else{
				globalFlag=1;
				cout << "NO" << endl;
				break;
			}
		}
	}
	if(globalFlag==0 && flag==1)
		cout << "NO" << endl;
	else if(globalFlag==0)
		cout << "YES" << endl;

return 0;	
}