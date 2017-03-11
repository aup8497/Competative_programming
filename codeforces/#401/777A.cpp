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
int res,pos;
	cin >> n >> pos ;

	int newpos=n%6;

	// int a[]={0,0,1,2,2,1,0,0,1,2,2,1,0,0,1};

	if(pos==0){
		
		if(newpos==0 || newpos==5){
			cout << "0"; 
		}if(newpos==2 || newpos==1){
			cout << "1" ;
		}if(newpos==3 || newpos==4){
			cout << "2";
		}

	}
	else if(pos==1){
		if(newpos==1 || newpos==4){
			cout << "0"; 
		}if(newpos==0 || newpos==3){
			cout << "1" ;
		}if(newpos==5 || newpos==2){
			cout << "2";
		}		
	}
	else{
		if(newpos==2 || newpos==3){
			cout << "0"; 
		}if(newpos==4 || newpos==5){
			cout << "1" ;
		}if(newpos==1 || newpos==0){
			cout << "2";
		}	
	}

	// cout << res << endl;


return 0;	
}
