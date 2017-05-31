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
	string s1,s2;
	cin >> s1 >> s2;
	char res[MAX];
	ll n=s1.length();
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	reverse(s2.begin(),s2.end());

	j=0;
	k=0;
	int start=0,jmid,kmid;
	int end=n-1;
	kmid=(n-1)/2;
	jmid=(n-1)/2;

	if(n%2==1)
		kmid=kmid-1;

	for(i=0;i<n;i++){

		if(i%2==0){
			if(s1[j]<s2[k])
				res[start++]=s1[j++];
			else
				res[end--]=s1[jmid--];
		}
		else{
			if(s1[j]<s2[k])
				res[start++]=s2[k++];
			else
				res[end--]=s2[kmid--];
		} 
	}

	// cout << start << " " << end <<  j << " " << k << " " << jmid << " " << kmid <<   endl;

	// for(i=0;i<n;i++)
	// 	cout << res[i] ;
	printf("%s\n",res );

return 0;	
}
