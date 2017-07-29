#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,i;
	cin >> n >> k;
	int dig=n%10;
	for(i=1;i<=10;i++){
		if((dig*i)%10==k || (dig*i)%10==0){
			cout << i << endl;
			break;
		}
	}
	return 0;
}