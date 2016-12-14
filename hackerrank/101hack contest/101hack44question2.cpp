#include <iostream>
#include <vector>
//#include <assert.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t;

	while(t--){
		long long n,i,j,count=0;
	cin >> n;
	long long b[n];
	memset(b,1,sizeof(b));
	b[0]=0;
	b[1]=0;

	for(i=2;i<=n;i++)
	{
		if(b[i])
		{	
			count++;
			for(j=2*i;j<=n;j+=i)
				b[j]=0;
		}
	}

	if(count==0){
		cout << "Bob" << endl;
	}else if(count%2==0){
		cout << "Bob" << endl;

	}else{
		cout << "Alice" << endl;

	}
	cout << count <<  endl;

	}


		return 0;
}

