//solution accepted

#include<iostream>
#include<vector>
using namespace std;


int main(){
    int i,n,count[101]={0};
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
       count[a[a_i]]++;
    }
int max=0;
    for(i=0;i<99;i++){
    	if((count[i]+count[i+1]) >max )
    		max=count[i]+count[i+1];
    }

    cout << max;
    return 0;
}
