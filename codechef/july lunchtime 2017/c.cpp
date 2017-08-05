#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,res=0,sum=0;
int a[MAX],b[MAX];
std::vector<int> v;

int main(){

	int t,n,k,c,i;
	cin >> t;
	while(t--){

		cin >> n >> k >> c;
		std::vector<int> v(n);
		int x=(n/k)+1;
		int res=0,val=0,flag=0;

		
		for(i=0;i<n;i++){
			cin >> v[i];
		}

		sort(v.begin(), v.end());

		for(auto z:v)
			cout << z << " ";

		while(x--){

			std::vector<int>::iterator low=v.begin();
			val=v[0];
			v.erase(val);
			for(i=0;i<k;i++){
				cout << "val = " << val << "at pos =" << low-v.begin() <<  endl;
				low=std::lower_bound (v.begin(), v.end(), val*c);
				if(low==v.end()){
					flag=1;
					break;
				}else{
					val=v[low-v.begin()-1];
					v.erase(val);
					// ++low;
				}
			}
			if(flag==0)
				res++;
			else
				break;
		}

		cout << res << endl;

	}

return 0;	
}