#include<stdio.h>
int main(){
	long long int m,n,a;
	scanf("%lld",&m);
	scanf("%lld",&n);

	a=m-n;
	if(a%10 == 9)
	a-=1;
	else
	a+=1;

printf("%lld",a);
return 0;
}