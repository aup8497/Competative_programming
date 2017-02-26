#include <bits/stdc++.h>
using namespace std;



int main(){

	int t,i;
	cin >> t;

	while(t--){
		string s;
		cin >> s;
		int c1[26]={0},c2[26]={0};
		int l=s.length();
		
		for(i=0;i<=(l-2)/2;i++){
			c1[s[i]-'a']++;
		}

		for(i=l;i>=(l+1)/2;i--){
			c2[s[i]-'a']++;
		}
		int flag=0;

		for (int i = 0; i < 26; ++i)
		{
			if(c1[i]!=c2[i]){
				flag=1;
				break;
			}
		}

		if(flag==1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl; 




	}



return 0;	
}