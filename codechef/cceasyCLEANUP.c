#include<stdio.h>
int main(){
	
	long long int t,n,m,z;
//input test case	
	scanf("%lld",&t);
//iterating over the test case	
	for (long long int x = 0; x < t; ++x)
	{
	
		scanf("%lld %lld",&n,&m);

long long int a[n];		
//assigning a[i]=i+1 for the whole array till n	
		for (long long int i = 0; i < n; ++i)
		{
			a[i]=i+1;
		}
//assigning the given positions to be zero		
		for (long long int i = 0; i < m; ++i)
		{
			scanf("%lld",&z);
			a[z-1]=0;
		}
long long int count=0;
//this is for printing chefs work		
		for (long long int i = 0; i < n; ++i)
		{
			if(a[i] == 0)
				continue;
			else if(count%2==0){
				printf("%lld ",a[i] );
				count++;
			} 
			else{
				count++;
			}

		}
count=0;		
printf("\n");
//this is for printing assistants work		
		for (long long int i = 0; i < n; ++i)
		{
			if(a[i] == 0)
				continue;
			else if(count%2==0){
				count++;
			} 
			else{
				printf("%lld ",a[i] );
				count++;
			}

		}
printf("\n");
	}

return 0;
}
