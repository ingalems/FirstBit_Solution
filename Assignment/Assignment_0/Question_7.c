// 7. Write a C program to convert given minutes into hours and remaining minutes.
#include <stdio.h>
void main(){
	int minute,hour;
	printf("Enter the Minute : ");
	scanf("%d",&minute);
	hour=minute/60;
	minute=minute%60;
	printf("Given the minute calculate the hours is : %d:%d",hour,minute);
}
