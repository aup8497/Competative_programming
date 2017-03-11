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
string s[500005];
// int l[500005];

int main(){
	int pos=0;
	cin >> n;

	for(i=0;i<n;i++){
		cin >> s[i];
		// l[i]=s[i].length();
   	}
	
	// cout << "***********" << endl;

   	for(i=n-1;i>0;i--){
   		int minlength=min(s[i].length(),s[i-1].length());

      int flag=0;
   		for(j=0;j<minlength;j++){

   			if(s[i][j] < s[i-1][j]){
   				pos=j;
          flag=1;
          break;
        }else if(s[i][j] > s[i-1][j]){
          flag=2;
          break;
        }

   		}	
       // cout << endl << "flag is " << flag << " pos is " << pos <<"for i= " << i << endl;


   		if( flag==1){
        s[i-1]=s[i-1].substr(0,pos);
        // cout << "came here";

      }
      if(flag==0){
       s[i-1]=s[i-1].substr(0,minlength);
      }

   	}

	for(i=0;i<n;i++){
		cout <<  s[i] << endl;
   	}


return 0;	
}
  		// cout << endl << "min length is " << minlength <<"for i= " << i << endl;
   		// cout <<endl <<  "for pos=" << pos<< s[i] << s[i-1] << endl;
