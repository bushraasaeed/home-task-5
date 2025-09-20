#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter marks of three students: ");
	scanf(" %d %d %d",&a,&b,&c );
	(a>b && a>c? printf("greatest marks are %d",a):(b>a && b>c)?printf("greatest marks are %d",b): printf("greatest marks are %d",c));
	return 0;
	}