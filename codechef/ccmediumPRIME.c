
    #include <stdio.h>
     
    int main(void) {
    	// your code goes here
    	
    	long long int x,t,i,j,n,l,m;
    	
    	scanf("%lld",&t);
    	for(x=0;x<t;x++)
    	{
    	scanf("%lld%lld",&m,&n);
    	long long int a[n+1];
    	
    	for(l=0;l<=n;l++)
    	a[l]=l;
    	a[1]=0;
    	
    	for(i=2;i<=n;i++)
    	{
    	if(a[i]==0)
    	continue;
    	
    	for(j=i+i;j<=n;j+=i)
        {   
            a[j]=0;
        }

   	    }
    		

    	for(i=m;i<=n;i++)
    	{
    	if(a[i]!=0)
    	printf("%lld\n",a[i]);
    	}
    	
    	printf("\n");
    	
    		
    	}
    	
    	return 0;
    }
     
