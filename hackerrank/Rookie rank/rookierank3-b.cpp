#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define ll long long

ll i,n,k,j;
string s1,s2;

int main() {
    cin >> n;
    for(i=0;i<n;i++){
        cin >> s1 >> s2;

    if(s1[5]=='A' && s2[5]=='P'){
    	cout << "First" << endl;
    	// cout << "hi0" << endl;
    }
    else if(s2[5]=='A' && s1[5]=='P'){
    	cout << "Second" << endl;
    	// cout << "hi0" << endl;
    }
    else{
    	// both are either AM or PM
    	if(s1[0]=='1' && s1[1]=='2' && (s2[0]!='1' || s2[1]!='2') )
    		cout << "First" << endl;
    	else if(s2[0]=='1' && s2[1]=='2' && (s1[0]!='1' || s1[1]!='2') )
    		cout << "Second" << endl;
    	else{
    		if( s1.compare(s2)<0 )
    			cout << "First" << endl;
    		else
    			cout << "Second" << endl;
    	}

	}

	}
    return 0;
}
