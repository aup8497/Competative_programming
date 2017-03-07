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

int get_first_lesser(const std::vector<int>& v, int x)
{
  int mid;
  int first = 0, last = int(v.size()) - 1;
  while (first <= last)
  {
     mid = (first + last) / 2;
    if (v[mid] >= x)
      last = mid - 1;
    else
      first = mid + 1;
  }
  if( v[mid]!=x  )
    return mid+1;
  else
    return mid;
}

int get_first_greater(const std::vector<int>& v, int x)
{
  int first = 0, last = int(v.size()) - 1;
    int mid;
  while (first <= last)
  {

    mid = (first + last) / 2;
    if (v[mid] > x)
      last = mid - 1;
    else
      first = mid + 1;
  }
  if( v[mid]!=x  )
    return mid-1;
  else
    return mid;
}


int main(){

  std::vector<int> v[5];
  v[1].pb(0);
  v[2].pb(1);
  v[2].pb(2);
  v[1].pb(3);
  // v.pb(5);
  // v.pb(5);
  // v.pb(5);
  // v.pb(6);

  cout << get_first_lesser(v[2],0);
  cout << get_first_lesser(v[2],3);
  // cout << get_first_greater(v[2],1);

return 0;  
}
