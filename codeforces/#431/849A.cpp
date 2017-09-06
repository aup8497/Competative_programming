#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

int main(){

	int i,n;
	cin >> n ;
	std::vector<int> v(n);
	for(i=0;i<n;i++)
		cin >> v[i];

	if(v[0]%2==0 || v[n-1]%2==0)
		cout << "No" << endl;
	else if(n%2==1){
		cout << "Yes" << endl;
	}else{
		cout << "No" << endl;
	}

return 0;	
}