#include <iostream>
#include<set>
using namespace std;

int main() {
	string a;
	cin >> a;
	set<string> s;
	for(int i=0;i<a.length()-1;i++){
		s.insert(a.substr(i,2));
	}
	cout << s.size();
	// your code goes here
	return 0;
}