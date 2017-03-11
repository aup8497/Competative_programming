#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll n,m,i,j,k;

int main(){
	string s1,s2;
	int pos=0;
	cin >> n;
	int res1=0;int res2=0;
	cin >> s1 >> s2;



	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());

	// cout << s1 << endl << s2;

	pos=0;
	for(i=0;i<n;i++){
		while(s2[pos]<=s1[i] && pos<n)
			pos++;
		if( s1[i] < s2[pos] && pos<n){
			res2++;
			pos++;
		}
	}

pos=0;
	for(i=0;i<n;i++){
		while(s2[pos] < s1[i] && pos<n)
			pos++;
		if( s1[i] <= s2[pos] && pos<n){
			res1++;
			pos++;
		}
		// cout << "came here when pos=" << pos<< endl;
	}
	res1=n-res1;
	// cout << res1;

	cout << res1 << endl << res2;

return 0;	
}