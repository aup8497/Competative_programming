#include <bits/stdc++.h>

#define ll long long
#define MAX 100005

using namespace std;

ll t,n,i;

int main(){
	cin >> t;

	while(t--){
			
		cin >> n;
		char s1[MAX],s2[MAX];

		// cin >> s1 >> s2;

		scanf("%s%s",s1,s2);

		ll flag=0,cnt=0,virtualCnt=0,flag1=0,flag2=0;
		for(i=0;i<n;i++){
			if(s1[i]=='*' && s2[i]=='*')
				flag=1;

			if(s1[i]=='*' || s2[i]=='*')
				cnt++;

		}

		for(i=0;i<n;i++){
			if((s1[i]=='*')^(s2[i]=='*') ){
				if(s1[i]=='*')
					flag1=1;
				if(s2[i]=='*')
					flag2=1;
			}

			if(s1[i]=='*' && s2[i]=='*'){
				flag1=0;
				flag2=0;
			}


			if( (flag1==1 && flag2==1) ){
				virtualCnt++;
				flag1=0;
				flag2=0;
			}

		}

		// cout << "virtual count = " << virtualCnt << endl;

		// cout << "count = " << cnt << endl;
		cnt-=1;
		if(virtualCnt>0){
			cnt-=virtualCnt;
			cnt+=1;
		}else{

			if(flag==1)
				cnt+=1;
		}

		if(cnt<0)
			cnt=0;
		cout << cnt << endl;

	}

}


// 5       
// ****.
// .****
// 4
