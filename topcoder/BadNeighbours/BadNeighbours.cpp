//this is my solution
// this solution is correct for everytest case

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

class BadNeighbors 
{
  public:
   vector<int> hlp;
  
    int getAnswer(int i1, int i2)
  {	
  	if( i2<=i1+1 && i2<i1){
      // cout << "\ncame to "<< i1 << " " << i2 << endl;
  		return 0;
    }else if( i2<=i1+1 && i2>=i1 ){
      return hlp[i2];
    }
    else if(i2==i1+2){
      // cout << "\ncame to "<< i1 << " " << i2 << endl;
      return hlp[i2]+hlp[i1];
    }
  	else{
      // cout << "\ncame to "<< i1 << " " << i2 << endl;
   		return hlp[i2]+max(getAnswer(i1,i2-3),getAnswer(i1,i2-2));
    }
  }
  
  int maxDonations(vector <int> donations) 
  {
    hlp = donations;
    int n = donations.size();
    return max(getAnswer(0,n-2), getAnswer(1,n-1));
  }

};
