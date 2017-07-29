#include <bits/stdc++.h>
#define ll long long
#define MAX 100007
using namespace std;

// ll n,m,i,j,k,x,res=0,sum=0;
// int a[MAX],b[MAX];
// std::vector<int> v;

int main(){
	int a,b,res=0,i;
	ll l,r;
	cin >> a >> b >> l >> r ;

	// if(r<=a){
	// 	cout << r-l+1 << endl;
	// 	exit(0);
	// }

	// l+=1;
	// r+=1;

	// if(l<=a){
	// 	int left=a-l+1;
	// 	// int mid=1;
	// 	int right=(r-a)%(b+a)-b;
	// 	right=max(0,right);

	// 	// cout << "left=" << left; 
	// 	// cout << "right=" << right ;
	// 	if(r>a+b+a){
	// 		cout << a+1 << endl;
	// 		exit(0);
	// 	}
	// 	else{
	// 		cout << min(a+1,left+right);
	// 		exit(0);
	// 	}
	// }
	// if(r-l+1>=a+b){
	// 	cout << a+1 << endl;
	// 	exit(0);
	// }

	// for(i=0;i<a;i++){

	// }
	// for(i=a;i<a+b;i++){

	// }
	if(l-r+1>=a+b)
		res=a+1;
	else{
		string s;
		for(i=0;i<a;i++){
			char ch=i+97;
			if(i==a-1)
				ch=i+97+1;
			s+=ch;
		}
		char ch=a+96;
		for(i=a;i<a+b;i++){
			s+=ch;
		}
		for(i=a+b;i<a+b+a;i++){
			
			char ch;
			ch=i+97-a-b;
			if(i==a+b+a-1)
				ch=i+97-a-b+1;
			s+=ch;
		}
		ch=a+96;
		for(i=a+b+a;i<a+b+a+b;i++){
			s+=ch;
		}

		// cout << s;

		int oldl=l-1;
		int oldr=r-1;
		l=l-1%(a+b);
		r=r-1%(a+b);
		if(r<l)
			r+=a+b;

// cout << "position of new l and r is " << l << " " << r;
		int cnt[26];
		for(i=0;i<26;i++){
			cnt[i]=0;
		}
		for(i=l;i<=r;i++){
			if(cnt[s[i]-97]==0){
				cnt[s[i]-97]=1;
				res++;
			}

			// cout << s[i] << " " ;
		}

		if(oldl<a && oldr>a)
			res-=1;

	}

		cout << res << endl ;

return 0;	
}
