//bobs-whatsapp-group
//still to complete
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

ll n,m,i,j,k;

int main(){

	cin >> n >> m >> x ;
	list<string> slist;
	map<int, list<string>> m;
	int key;
	for(i=0;i<x;i++){
		cin >> key >> no;
		for(j=0;j<no;j++){
			string str ; 
			cin >> str;
			slist.insert(str);
		}

		m.insert(make_pair(key,slist));
	}
	
	cin >> test ;
	for(i=0;i<test;i++){
		cin >> llimit;

		for(j=llimit ; j<n;j++ ){
			if ( m.find(j) == m.end() ) {
			  // not found
			} else {
			  	for()
			}
		}
	}


return 0;	
}
