#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

int main(){

	int n;
	string s1,s2;
	cin >> s1 >> s2;
	cin  >> n;
	std::map<string, int> m;
	m["^"]=0;
	m[">"]=1;
	m["v"]=2;
	m["<"]=3;

	if(abs(m[s1]-m[s2])%2==0)
		cout << "undefined" << endl;
	else{
		if((m[s1]+n)%4==m[s2])
			cout << "cw" << endl;
		else
			cout << "ccw" << endl;
	}

return 0;	
}