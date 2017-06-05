#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;
int a[MAX],b[MAX];
std::vector<int> v;

int main(){
	ll vld,val;
	cin >> vld >> val ;

	for(i=1;;i++){
		if(i%2==1){
			vld-=i;
			if(vld<0){
				cout << "Vladik" << endl;
				break;
			}
		}else{
			val-=i;
			if(val<0){
				cout << "Valera" << endl;
				// f=2;
				break;
			}
		}

	}

return 0;	
}