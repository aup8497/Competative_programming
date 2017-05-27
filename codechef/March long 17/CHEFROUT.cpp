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

	cin >> n ;

	while(n--){
		string s;
		cin >> s;
		int flag=0;
		for(i=0;i<s.length();i++){
			if((s[i]=='E' && s[i+1]=='C') || (s[i]=='S' && s[i+1]=='C') || (s[i]=='S' && s[i+1]=='E'))	
			{
				printf("no\n");
				flag=1;
				break;
			}	
		}
		if(flag==0)
			printf("yes\n");

	}


return 0;	
}
