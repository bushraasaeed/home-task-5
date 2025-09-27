#include<stdio.h>
int a,b;
void binary1(int n){
	if (n>1){
		binary1(n/2);
	}
	printf("%d",n%2);
}
int main(){
printf("lets learn about binary operators! \n");
printf(" working of a&b | a^b \n");
printf("enter first number: ");
scanf("%d", &a);
printf("enter second number: ");
scanf("%d", &b);
printf("the binary of first number is ");
binary1(a);
printf("\nthe binary of second number is ");
binary1(b);
printf("\na&b is %d", a&b);
printf("\na&b in binary is ");
binary1(a&b);
printf("\na^b is %d", a^b);
printf("\na^b in binary is ");
binary1(a^b);
printf("\na&b | a^b is %d", a&b | a^b);
printf("\na&b | a^b in binary is ");
binary1(a&b | a^b);
	return 0;
	}

	