#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <set>


#define pb push_back
#define mp make_pair
#define ll long long
#define MOD 1000000007
const int MAX=1e5+5;
using namespace std;

ll n,m,i,j,k;
int sz=0,total;
unordered_map<string,int> m;
set<string> ss;

std::vector<string> s[MAX];
std::vector<int> c;

int g(string str){
	if(m.count(str)==0)
	{
		ss.insert(str);
		return m[str]=sz++;
	}
	return m[str];
}

int main(){

	cin >> n >> k ;
	string temp;
	int cost;

	for(i=0;i<n;i++){

		cin >> str;

		cin >> cost;
		g(str).pb(cost);
	}

	for(string z: ss){
		total++;
	}
			
	cout << total;

return 0;	
}
