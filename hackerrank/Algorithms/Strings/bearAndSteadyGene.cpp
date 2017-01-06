//this code is wrong try it correct it using bearGene.cpp -> written by someone.

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
	string s;
	cin >> n  ;
	cin >>s ;
	ll countA=0,countT=0,countG=0,countC=0;
	int head=s.length()-1;
	int tail=0;
	int limit=n/4;
	ll n=s.length();

	for(;head>=0;head--){
		if(tail==0)
			break;
		
		if(s[head]=='A')
			countA++;
		if(s[head]=='T')
			countT++;
		if(s[head]=='G')
			countG++;
		if(s[head]=='C')
			countC++;
	
		if(countA>limit){
			countA--;
			break;
		}
		if(countT>limit){
			countT--;
			break;
		}
		if(countG>limit){
			countG--;
			break;
		}
		if(countC>limit){
			countC--;
			break;
		}

	}

	// countA=0;
	// countT=0;
	// countG=0;
	// countC=0;

	for(;tail=n-1;tail++){
		if(head==n-1)
			break;

		if(s[tail]=='A')
			countA++;
		if(s[tail]=='T')
			countT++;
		if(s[tail]=='G')
			countG++;
		if(s[tail]=='C')
			countC++;


		if(countA>limit){
			break;
		}
		if(countT>limit){
			break;
		}
		if(countG>limit){
			break;
		}
		if(countC>limit){
			break;
		}

	}
	cout << head << " "<<tail << endl;
	cout << max(0,tail-head) << endl;

return 0;	
}
