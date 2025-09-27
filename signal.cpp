#include<stdio.h>
int main(){
	char signal;
	int time;
	printf("lets check the signal and move accordingly \n");
	printf("enter signal (R,G,Y): ");
	scanf(" %c", &signal);
	printf("enter time: ");
	scanf("%d", &time);
	if (time>0 && time<23){
	
	switch(signal){
		case 'r':
		case 'R':
			if (time<22){
				printf("stop and wait \n");
			}
			else {
				printf("stop, but night caution allowed \n");
			}
		break;
		case 'y':
		case 'Y':
			printf("get ready \n");
		break;
		case 'g':
		case 'G':
			printf("go");
		break;
		default: printf("invalid signal");
		break;
	}
}
else printf("invalid time");

	return 0;
}