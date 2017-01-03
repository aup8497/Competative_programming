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


int gcd(int u, int v){
    return (v != 0) ? gcd(v, u % v) : u;
}

ll lcm(ll a, ll b)
{
    int temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}
int main(){

    int n;
    int m,count=0;
    int g=0,l=0;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       
       cin >> a[a_i];
    	
    }
   

    vector<int> b(m);
    for(int b_i = 0;b_i < m;b_i++){
       cin >> b[b_i];

    }


    if(a[0]>b[0])
    	a.swap(b);

     for(int a_i = 0;a_i < n;a_i++){
    	
    	if(a_i==0){
    		l=a[0];
    	}
    	else if(a_i == 1){
    		l=lcm(a[0],a[1]);
    	}
    	else if(a_i >=2){
    		l=lcm(l,a[a_i]);
    	}
    		// cout << "inside lcm loop " << l << endl;
    	
    }
    int low=l;

    for(int b_i = 0;b_i < m;b_i++){

       	if(b_i==0){
       		g=b[0];
       	}else if(b_i == 1){
    		g=gcd(b[0],b[1]);
    		// cout << " gcd1= " << g << endl;
    	}else if(b_i >=2){
    		g=gcd(g,b[b_i]);
    		// cout << " gcd2= " << g << endl;

    		// cout << "inside gcd loop " << g << endl;

    	}
    }




    // cout  << "gcd is " << g << " lcm is " <<l <<endl;
    
    while(l<=g){
    	if(g%l==0){
    		count++;
//    		cout << l << " ";
    	}
    	l+=low;
    }

	cout << count << endl;

return 0;	
}
