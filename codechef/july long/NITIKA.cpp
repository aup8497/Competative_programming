#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>

#define pb push_back
#define mp make_pair
#define ll long long
#define MOD 1000000007
const int MAX=1e5+5;
using namespace std;

ll n,m,i,j,k;

int main(){
	ll t;
	cin >> t;
	string str;
	getline(cin,str);
	while(t--){
		string s;
		std::vector<string> v;
		std::getline(std::cin,s);
		char str[100005];
		strcpy(str,s.c_str());
		char * pch;
		pch = strtok(str," ");
		while (pch != NULL)
		{
			v.push_back(pch);
			pch = strtok(NULL, " ");
		}

		for(i=0;i<v.size();i++){
		  	if(i>=v.size()-1){
		  		std::transform(v[i].begin(), v[i].end(), v[i].begin(), ::tolower);

		  		v[i][0]=v[i][0]-(v[i][0]>96?32:0);
		  		cout << v[i];
		  	}else{
		  		if(v[i][0]>96)
		  			// cout << v[i][0]-32 << ". ";
		  			printf("%c. ",v[i][0]-32);
		  		else
		  			cout << v[i][0] << ". ";
		  	}
		}

		cout << endl;
	}	


return 0;	
}