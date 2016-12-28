#include<iostream>
using namespace std;
#define ll long long
#define pb push_back
const int MAX=1e5+7;

int a[MAX],b[MAX],n,k,rem;
int main(){
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> a[i];

		if(i==0){
			b[0]=a[0];
		}else{
			b[i]=std::max(k-b[i-1],a[i]);
			rem+=b[i]-a[i];
		}
	}
	cout << rem << endl;
	for(int i=0;i<n;i++){
		cout << b[i] << " " ;
	}

return 0;	
}