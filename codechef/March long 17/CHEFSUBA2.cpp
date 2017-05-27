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

ll n,m,i,j,k,p,z=0;
int a[2*MAX],block[2*MAX],prefix[2*MAX],cnt=0,maxArray[2*MAX];
char b[MAX],ch;

int main(){

	cin >> n >> k >> p;

	for(i=0;i<n;i++)
		cin >> a[i];
	for(i=0;i<n;i++)
		a[n+i]=a[i];

	//calculate prefix sum of 1s
	prefix[0]=(a[0]==1)?1:0;
	for(i=1;i<2*n;i++){
		prefix[i]=(a[i]==1)?prefix[i-1]+1:prefix[i-1];
	}

//calculating block i.e total number of 1s in a block of k elemets starting from first element
	block[0]=prefix[k-1];
	for(i=0;i<n-1;i++){
		block[i+1]=prefix[i+k]-prefix[i];
	}
	for(i=0;i<n;i++)
		block[i+n]=block[i];

// cout << "\nblock array\n";
// for(i=0;i<2*n;i++)
// 	cout << block[i];

	multiset<int> ms;
	multiset<int>::reverse_iterator it ;

	for(i=0;i<=n-k;i++){
		ms.insert(block[i]);
	}

	// cout << "contents of the set is \n" ;
		// multiset<int>::iterator it2;
	// for(it2=ms.begin();it2!=ms.end();it2++){
		// cout << *it2 << " " ;
	// };

	it=ms.rbegin();
	maxArray[z++]=*it;
	// cout << "\n\nmaxArray[0]= " << maxArray[0] << endl;
	for(i=1;i<n;i++){
		// cout << "removing " << block[i-1] << endl;
		ms.erase(ms.find(block[i-1]));
		// cout << "adding " << block[i+n-k] << "i=" << i+n-k-1 << endl;
		ms.insert(block[i+n-k]);
		// cout << "maxArray[i] = " << *it;
		maxArray[z++]=*it;
	}

	// cout << "\nmax array\n";
	// for(i=0;i<n;i++)
	// 	cout << maxArray[i];

	for(z=0;z<p;z++){
		cin >> ch;
		if(ch=='!'){
			cnt+=n-1;
			cnt%=n;
		}
		else{
			cout << maxArray[cnt] << endl;
		}
	}

return 0;	
}