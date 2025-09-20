#include<stdio.h>
int main(){
	int attendance;
	char mid,fee;
	printf("enter your attendance: ");
	scanf("%d",&attendance);
	if (attendance<75){
	printf("you are not eligible");
	}
	else{
	printf("enter your mid term results (p-pass f-fail): ");
	scanf(" %c",&mid);
	if (mid!='p'){
	printf("you are not eligible");
	}
	
	else{
	
	printf("have you paid the exam fee(y-yes n-no): ");
	scanf(" %c",&fee);
}
	if (fee=='y'){
	printf("you are eligible for the final exam");
	}
	else 
	printf("Please clear your dues to appear in the Final Exam");
}
	

	return 0;
	}

	