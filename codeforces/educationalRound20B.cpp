#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll a[200005],l[200005],r[200005],lst,mx,mn,n,i;

int main(){
	
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	int cn=n;

	for(i=0;i<n;i++){
		if(a[i]==0)
			cn=0;
		l[i]=cn;
		cn++;
	}

	cn=n;
	for(i=n-1;i>=0;i--){
		if(a[i]==0)
			cn=0;
		r[i]=cn;
		cn++;	
	}

	for(i=0;i<n;i++){
		cout << min(l[i],r[i]) << " ";
	}

}
