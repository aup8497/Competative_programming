#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include <sstream>
#include <cstdio>
using namespace std;

int main()
{
	int t;
	string abc;
	cin >> t;
	char ch=getchar();
	// scanf("%i",ch);

	while(t--){
		int i,j;
	    // greet the user
	    std::string name;
	    std::getline(std::cin, name); 
	    // cout << "final strng is" << name << endl;
	    std::istringstream input;
	    input.str(name);
	    int mx = 0;
	    std::vector<int> v;
	    for (std::string line; std::getline(input, line,' '); ) {
	        int x = std::stoi(line);
	        v.push_back(x);
	    }
	    int flag=0;
	    int n=v.size();
	    for(i=0;i<n;i++){
	    	if(flag==0 && v[i]==n-1){
	    		flag=1;
	    		continue;
	    	}
	    	mx=max(mx,v[i]);

	    }
	    cout << mx << endl;

	}

}