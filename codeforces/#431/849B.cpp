#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

ll n,m,i,j,k,x,y,res=0,sum=0;
std::vector<int> v;

int main(){

	cin >> n ;
	double slope1=0.0,slope2=0.0,slope3=0.0;
	std::vector<ll> v(n);
	int flag=0;
	for(i=0;i<n;i++){
		cin >> v[i];
	}

	for(i=0;i<n-2;i++){
		j=i+1;
		slope1=((double)v[j]-(double)v[i])/((double)j-i);
		j=i+2;
		slope2=((double)v[j]-(double)v[i])/((double)j-i);
		j=i+2;
		slope3=((double)v[j]-(double)v[i+1])/((double)j-(i+1));

		if(slope1!=slope2 && slope2!=slope3 && slope3!=slope1)
			flag=1;
	}

// This is wrong solution
	// if(n<=2){
	// 	cout << "No" << endl;
	// 	exit(0);
	// }
	// std::map<double, ll> m;
	// for(i=0;i<n;i++){
	// 	for(j=i+1;j<n;j++){
	// 		slope=((double)v[j]-(double)v[i])/((double)j-i);
	// 		m[slope]++;
	// 	}
	// }
	// int flag=0;
	// x=ceil((float)n/2);
	// y=floor(n/2);
	// ll threshold=(x*(x-1)/2)+(y*(y-1)/2);
	// for(auto it: m){
	// 	if( it.second >= threshold)
	// 		flag=1;
	// }

	if(flag==0 )
		cout << "Yes"  << endl;
	else
		cout << "No" << endl;


return 0;	
}


