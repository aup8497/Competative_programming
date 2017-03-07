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

int prefix[MAX],a[MAX]={0};
std::vector<int> v[MAX];


// int get_first_lesser(const std::vector<int>& v, int x)
// {
//   int mid;
//   int first = 0, last = int(v.size()) - 1;
//   while (first <= last)
//   {
//      mid = (first + last) / 2;
//     if (v[mid] >= x)
//       last = mid - 1;
//     else
//       first = mid + 1;
//   }
//   if( v[mid]!=x )
//     return mid+1;
//   else
//     return mid;
// }

// int get_first_greater(const std::vector<int>& v, int x)
// {
//   int first = 0, last = int(v.size()) - 1;
//     int mid;
//   while (first <= last)
//   {

//     mid = (first + last) / 2;
//     if (v[mid] > x)
//       last = mid - 1;
//     else
//       first = mid + 1;
//   }
//   if( v[mid] !=x  )
//     return mid-1;
//   else
//     return mid;
// }



int main(){
int q,n,x,type,l,r,i,j;
	cin >> n >> q ;

	for(i=0;i<n;i++){
		cin >> x;
		if(i==0){
			v[x].pb(i);
			a[0]=x;
			prefix[0]=1;
		}else{
			v[x].pb(i);
			if(a[x]!=1 ){
				a[x]=1;
				prefix[i]=prefix[i-1]+1;
			}else{
				prefix[i]=prefix[i-1];
			}
		}
	}

	for(i=0;i<q;i++){
		cin >> type;
		if(type==1){
			int k;
			cin >> k;
			cout << prefix[k] << endl;
		}else{
			cin >> l >> r >> x;

			cout << ( upper_bound (v[x].begin(), v[x].end(), r) - lower_bound (v[x].begin(), v[x].end(), l) )  << endl;

		}
	}


return 0;	
}

//upper_bound (v[x].begin(), v[x].end(), r) will give the iterator to the next element of the element is either present or not present.



// Example: 1 2 2 4 4 4 4
// index:	0 1 2 3 4 5 6

// we want to find 3's upper bound and lower bound. (3 not present)
// lowerbound(v.begin(),v.end(),3) =  iterator to index 3 
// upperbound(v.begin(),v.end(),3) =  iterator to index 4
//
// we want to find 4's upper bound and lower bound. (4 is present)
// lowerbound(v.begin(),v.end(),3) =  iterator to index 3 
// upperbound(v.begin(),v.end(),3) =  iterator to index 4
//

