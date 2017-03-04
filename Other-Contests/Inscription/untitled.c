#include <stdio.h>
int main(){
	int i,t,n,max,a[1000000];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		max=a[1];
		for(i=1;i<n;i++){
			if(max<a[i])
				max=a[i];
		}
		printf("%d\n",max+1);
	}
	return 0;
}