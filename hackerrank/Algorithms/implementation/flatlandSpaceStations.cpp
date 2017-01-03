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

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<int> c(m);
    for(int c_i = 0;c_i < m;c_i++){
       cin >> c[c_i];
    }

    sort(c.begin(),c.end());

    int maxdis=n;

    maxdis=max(c[0],(n-c[m-1]-1));

    if(m==1){
    	//maxdis=max(c[0]-0,n-1-c[0]);
    	cout << maxdis << endl;
    	exit(0);
    }else{
    	for(int i=1;i<m;i++){
    		maxdis=max(maxdis,((c[i]-c[i-1])/2));
    	}
    	cout  << maxdis << endl;

    }


    return 0;
}