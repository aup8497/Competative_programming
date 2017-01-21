// weekOfCode1.cpp
#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

#define pb push_back
#define mp make_pair
#define ll long long
#define MOD 1000000007
const int MAX=1e5+5;
using namespace std;

ll n,m,i,j,c,k;

int main(){

	cin >> n >> c >> m;
	std::vector<int> v(n);

	for (i = 0; i < n; ++i)
		cin >> v[i]; 

	sort(v.begin(),v.end());

	if(v[n-1] <= (c*m) )
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

return 0;	
}
