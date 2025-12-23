// 1. Write a program to check whether a number is even or odd.
#include <stdio.h>
void main(){
	int num;
	printf("Enter the Number : ");
	scanf("%d",&num);
	if(num%2==0){
		printf("%d is a Even Number",num);
	}
	else{
		printf("%d is a odd Number",num);
	}
}
