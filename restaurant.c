#include<stdio.h>
int main(){
	int opt, qty,offer=0;
	char size;
	char type[20];
	printf("available options:\n 1)Coffee Shop \n 2)Burger Hub \n 3)Ice Cream Parlour \n");
	printf("choose one option: ");
	scanf("%d",&opt);
	switch(opt){
		case 3: printf("your order will be handled by ice cream parlour");
		break;
		case 2: printf("your order will be handled by burger hub");
		break;
		case 1: 
		printf("choose a coffee size (S, M, L)");
		 scanf(" %c",&size);
	 	printf("how many coffee do you want: ");
		 scanf("%d",&qty);
			if (qty>1){
				printf("check our combo offers!");
				printf("\ncombo offer applied \n");
				offer++;
			}
		 printf("coffee type (Regular, Cappuccino, Latte): ");
		 scanf(" %s", &type);
	   	printf("final bill: \n");
       	printf("coffee size: %c \n",size);
     	printf("coffee quantity: %d \n",qty);
     	printf("combo offer applied: %d \n",offer);
         printf("coffee type: %s \n",type);
     	printf("bill will be payed at the counter directly");
     	break;
     	default: printf("order can not be operated ");
	
	}
	
			
	
	return 0;
	}

	