#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int k=0;
    string s;
    cin >> s;
    char a[s.length()+1];
    
    for(int i=0;i<=sqrt(s.length());i++){
        for(int j=i;j<=s.length();j+=ceil(sqrt(s.length()))){
            cout << s[j];
            
        }
        if(k<ceil(sqrt(s.length()))-1)
        cout << " ";
        k++;
    }

    
    //printf();
    return 0;
}