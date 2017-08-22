#include <bits/stdc++.h>
using namespace std;

int main(){

	int n,i;
	cin >> n ;
	std::vector<int> a(2*n);
	for(i=0;i<2*n;i++)
		cin >>  a[i];

	sort(a.begin(), a.end());

	// cout << a[n-1] << " and  " << a[n];

	if(a[n-1]==a[n])
		cout << "NO";
	else
		cout << "YES";

return 0;	
}