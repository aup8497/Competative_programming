//this is an awesome question..

#include <stdio.h>
#include <iostream>
#include <string.h>
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
//char s[MAX];

int main(){

int t;
cin >> t;
	while(t--){
		string s;
		int flag=0,pos=0;
			cin >> s;

			for(i=s.length()-1;i>0;i--){
				if(s[i] <= s[i-1])
					continue;
				else{
					//char ch=s[s.length()-1];
					//s[s.length()-1]=s[i-1];
					//s[i-1]=ch;
					pos=i-1;
					flag=1;
					break;
				}

			}	

		if(flag==0)
			cout << "no answer" << endl;
		else{
			for(i=s.length();i>pos;i--){
				if(s[pos]<s[i])
					break;
			}
			swap(s[pos],s[i]);
			reverse(s.begin()+pos+1,s.end());

			cout << s << endl;
		}


	}


return 0;	
}
