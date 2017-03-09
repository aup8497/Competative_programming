#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    long long n;
    string s;
    cin >> t;
    while(t--){
        int x,y;
        cin >> n;
        cin >> s;
       cin >> x >> y;
        if(s[x]!=s[y])
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    
    return 0;
}