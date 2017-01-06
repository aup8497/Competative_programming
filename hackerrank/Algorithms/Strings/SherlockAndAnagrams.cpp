//we get misleaded by not looking at the constraints ,i.e n<100 which says us that it can be solved ion O(n^3)
//this problem needs n^3 loops at any cost .


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

bool CheckAna(string & s, int start1, int start2, int len)
{
	int let[26] = {0};
	bool result = true;
	for (int n = 0; n < len; n++)
	    {
	    let[s[start1+n]-'a']++;
	    let[s[start2+n]-'a']--;
	}
	for (int n= 0; n <26; n++)
	    {
	    if (let[n] != 0)
	        {
	        result = false;
	        break;

	     }
	}
	return result;
}

int main(){
	int t;
	cin >>t ;

	while(t--){

	string s;
	cin >> s;
	ll res=0;
       int n=s.length();
	for(int sizeOfSubstring=1;sizeOfSubstring<n;sizeOfSubstring++){
		for(int j=0;j<=n-sizeOfSubstring;j++){
			for(int i=j+1;i<=n-sizeOfSubstring;i++){
				// cout << "string 1= " << s.substr(j,sizeOfSubstring) << "string 2= " << s.substr(i,sizeOfSubstring) << endl; 

				if(CheckAna(s,i,j,sizeOfSubstring)){
					res++;
					// cout << "size= "<<sizeOfSubstring <<" j= "<< j << " i= " << i<<endl;
				}
			}
		}
	}

		cout << res << endl;
	}


return 0;	
}
