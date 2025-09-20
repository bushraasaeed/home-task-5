#include<stdio.h>
int main(){
	int x=3,y=2,z=4;
	printf(" x=3,y=2,z=4 \n");
	int step1=y*z;
	printf("1) y*z= %d \n",step1);
	int step2=x+step1;
	printf("2) x+y*z= %d \n",step2);
	int step3=(step2>10);
	printf("3) x+y*z>10: %d \n",step3);
	int step4=x-z;
	printf("4) x-z= %d \n",step4);
	int step5=(step4<y);
	printf("5) x-z<y: %d \n",step5);
	int step6=(step3 && step5);
	printf("6) x+y*z>10 && x-z<y: %d \n", step6);
	int step7= y%z;
	printf("7) y%%z= %d \n",step7);
	int step8= !step7;
	printf("8) !y%%z:%d \n",step8);
	int step9= step6 || step8;
	printf("9)  x+y*z>10 && x-z<y || (!y%%z) \n");
	return 0;
	}