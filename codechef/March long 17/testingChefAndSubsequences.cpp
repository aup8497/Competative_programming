#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
#include <set>

#define pb push_back
#define mp make_pair
#define ll unsigned long long
#define MOD 1000000007
const int MAX=1e5+5;
using namespace std;

//make all of them ll no matter what you are using 

ll n,m,i,j,k,loopCount=0,loopCountinner=0,setSize,res=0;
ll a[MAX];
std::multiset<ll> s;
std::multiset<ll>::iterator it;
// const std::multiset<ll>::iterator it2;

int main(){

	cin >> n >> k ;

	for(i=0;i<n;i++)
		cin >>  a[i];

	sort(a,a+n);

	s.insert(1);
	for(i=0;i<n;i++){
		setSize=s.size();
		it=s.begin();

		for( j=0;j<setSize ;j++ ){
			if(a[i]*(*it)<=k){
				s.insert(a[i]*(*it));
				res++;
			}
			it++;
		}
	}

	// cout << "contenets of the set" << endl;
	// for(it=s.begin();it!=s.end();it++)
	// 	cout << *it << " " ;

	// cout << endl;

	cout << res << endl;

return 0;	
}
