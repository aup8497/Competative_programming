#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <tr1/unordered_map>
using namespace std::tr1;
using namespace std;

 
int a[100009],p[100009],b[100009],ind;
 
void sieve()
{
	int i,j,k;
	memset(b,1,sizeof(b));	
	b[0]=b[1]=0;
	for(i=2;i<=100000;i++)
	{
		if(b[i])
		{
			for(j=2*i;j<=100000;j+=i)
				b[j]=0;
		}
	}
	ind=0;
	for(i=2;i<=100000;i++)
	{
		if(b[i]){
			p[ind++]=i;
            //cout << i << endl;
        }
	}


}
 
int main() {
	int t,i,j,n,t1,t2,ans,temp;
	sieve();
	unordered_map<int,int> m;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		m.clear();
		ans=1;
		for(i=0;i<n;i++)
		{     
            cout << endl << endl << endl ;
			cout << "inside for loop i= " << i;
            t1=a[i];
			temp=0;
			for(j=0;p[j]*p[j]<=t1;j++)
			{
                cout << endl <<endl;
                cout << "inside fr loop j="<< j;
				if(t1%p[j]==0)
				{
					m[p[j]]++;
					temp=max(m[p[j]],temp);
					while(t1%p[j]==0)
					{
						t1/=p[j];
                        cout << endl <<"t=" <<t;

					}
				}
			}
			if(t1!=1)
			{
				m[t1]++;
				temp=max(m[t1],temp);
			}
			t1=a[i];
			for(j=0;p[j]*p[j]<=t1;j++)
			{
				if(t1%p[j]==0)
				{
					m[p[j]]=temp;
					while(t1%p[j]==0)
					{
						t1/=p[j];
					}
				}
			}
			if(t1!=1)
			{
				m[t1]=temp;
			}
			ans=max(ans,temp);
		}
		printf("%d\n",ans);
	}
	return 0;
} 