//Write a C program to add two integers and display the result
#include <stdio.h>
void main(){
	int a,b,sum;
	printf("Enter the First Number : ");
	scanf("%d",&a);
	printf("Enter the Second Number : ");
	scanf("%d",&b);
	sum=a+b;
	printf("%d and %d sum is : %d",a,b,sum);
}
