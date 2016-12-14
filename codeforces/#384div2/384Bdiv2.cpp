#include <iostream>
#include <math.h>

#define ll unsigned long long
ll n,k,count;
using namespace std;


void binarySearch(ll count,ll first, ll last, ll key) {
   
   while (first <= last) {
   	//cout << "last=" << last << " first= " << first << endl; 

       ll mid = (first + ((last-first)/2));
      // cout << mid << endl;  // compute mid point.
       if (key > mid) {
       	count--;
           first = mid + 1;  // repeat search in top half.
       }
       else if (key < mid){
       count--; 
           last = mid - 1; 
       }
       else
           break;     // found it. return position /////
   }
   cout << count <<  endl;   // failed to find key
}

int main()
{
	cin >> n >> k;
	count=n;
	ll power=pow(2,n);
	binarySearch(count,0,power-1,k-1);
	return 0;
}

