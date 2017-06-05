#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,res=0,sum=0;
int a[MAX];
std::vector<int> v;

bool partition(int b[10002],int low,int high, int x){
	int wall=low;
	swap(b[high],b[x]);
	int pivot=high;
	for(int i=low;i<high;i++){
		if(b[i]<=b[pivot]){
			swap(b[i],b[wall]);
			wall++;
		}
	}
	swap(b[wall],b[pivot]);
	
	// for(int i=0;i<n;i++){
	// 	cout << b[i] << " ";
	// }

	return b[x] == a[x];
}


int main(){
int l,r,x,i;
	int b[10003];
	cin >> n >> m ;

	for(i=0;i<n;i++)
		cin >> a[i];

	// for(i=0;i<n;i++)
	// 	cout << a[i] << " ";


	for(i=0;i<m;i++){
		cin >> l >> r >> x ;
		memcpy(b,a,n*sizeof(int));

//you cant do this because this takes logn time
		// sort(b+l-1,b+r);
		// if(b[x-1]==a[x-1])
		if( partition(b,l-1,r-1,x-1) )
		{
			cout << "Yes" << endl;
		}else{
			cout << "No" << endl;
		}
	}

return 0;	
}