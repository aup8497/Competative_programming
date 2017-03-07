#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;

std::vector<string> v(2);

int main(){
	int n;
	string s;
	cin >> n >>  s;
	// string srev=;
	if(reverse(s.begin(),s.end()).compare(s))	{
		cout << s  << endl;
	}else{
	v.push_back(s);
	v.push_back(reverse(s.begin(),s.end()));
		sort(v.begin(),v.end());
		cout << v[0]  << endl << v[1] <<endl;
	}


return 0;	
}
