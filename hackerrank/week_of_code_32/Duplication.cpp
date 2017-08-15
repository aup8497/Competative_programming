#include <bits/stdc++.h>
#define ll long long
#define MAX 100005
#define pb push_back
using namespace std;

std::vector<int> binary; 

void precomputeBinary(){

	binary.pb(0);

	while(binary.size() < 1024 ){
		int i,sz=binary.size();
		for(i=0;i<sz;i++){
			if(binary[i]==0)
				binary.pb(1);
			else
				binary.pb(0);
		}
	}

}

int main(){

	precomputeBinary();

	int q,i=0;
	cin >> q;
	while(q--){
		cin >> i;
		cout << binary[i] << endl;
	}

return 0;	
}