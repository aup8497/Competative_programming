#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <set>

#define pb push_back
#define mp make_pair
#define ll long long
#define MOD 1000000007
const int MAX=1e5+5;
using namespace std;

ll n,m,i,j,k,loopCount=0,loopCountinner=0,setSize;
int a[MAX];
std::multiset<ll> s;
std::multiset<ll>::iterator it;
const std::multiset<ll>::iterator it2;



int main(){

	cin >> n >> k ;

	for(i=0;i<n;i++)
		cin >>  a[i];

	sort(a,a+n);

	int flag=0;

	s.insert(1);
	// s.insert(2);
	for(i=0;i<n;i++){
		// cout << "looping count = "  << loopCount++ << endl;

		setSize=s.size();
		it=s.begin();

		for( j=0;j<setSize ;j++ ){
			// cout << "inner loop =" << loopCountinner++ << endl ;
			// cout << "value=" <<  *it << endl;
			// cout << "a[" << i << "]*(*it) " << a[i]*(*it) << endl;
			if(a[i]*(*it)<=k){
				// cout << "inserting " << a[i]*(*it) << endl << endl;
				s.insert(a[i]*(*it));				
			}
			// else{
			// 	flag=1;
			// 	break;
			// }
			it++;
		}
		// if(flag==1)
		// 	break;

	}

	// cout << "contenets of the array" << endl;
	// for(i=0;i<n;i++)
	// 	cout << a[i] << " ";

	// cout << endl;

	// // cout << "contenets of the set" << endl;
	// for(it=s.begin();it!=s.end();it++)
	// 	cout << *it << " " ;

	// cout << endl;

	cout << s.size()-1 << endl;

return 0;	
}
