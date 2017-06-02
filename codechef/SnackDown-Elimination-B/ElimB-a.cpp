#include <bits/stdc++.h>

#define ll long long
#define MAX 100005

using namespace std;

int t,n,i;

int main(){
	cin >> n;

	while(n--){
		string s;
		cin >> s;
		int n=s.length();
		int mon=0,snk=0;
		for(i=0;i<n;i++){
			if(s[i]=='m')
				mon++;
			else
				snk++;			
		}
		int f[200];
		memset(f,0,sizeof(f));
		for(i=0;i<n;i++){
			int flag=0;

			if(s[i]=='m'){
				if( (i-1>=0) && s[i-1]=='s' && f[i-1]==0){
					f[i-1]=1;
					snk--;
					flag=1;
				}
				if( (i+1<=n-1) && s[i+1]=='s' && f[i+1]==0 && flag==0){
					f[i+1]=1;
					snk--;
				}
			}

		}

		if(snk>mon)
			cout << "snakes" << endl;
		else if(snk<mon)
			cout << "mongooses" << endl;
		else
			cout << "tie" << endl;
	}

}
