#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,j;
    vector<int> a;
    
    cin >> n;
    for(i=0;i<=n;i++){
        int num;
        cin >>num;
        a.push_back(num);
    }
    cin >> i >> j;
//    cout << i << j;
    a.erase(a.begin()+i-1,a.begin()+j);
    
    cout << a.size()-1 << endl;
    
    for(i=0;i<a.size()-1;i++){
        cout << a[i] << " " ;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}