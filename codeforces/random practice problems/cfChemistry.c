#include<stdio.h>
#include<string.h>

int main(){
	char a[1000];
	int i;

	scanf("%[^\n]s",a);
	int l=strlen(a);
	for(i=0;i<l;i++){
		if(a[i]== 'a' || a[i]== 'e' ||a[i]== 'i' ||a[i]== 'o' ||a[i]== 'u'){
			printf("%c",a[i]);
			if(i+2 < l)
			i=i+2;
		}
		else{
			printf("%c",a[i]);
		}
	}
return 0;
}
