//Write a C program to swap two numbers using a temporary third variable.
#include <stdio.h>
void main(){
	int a,b,temp;
	printf("Enter the a= ");
	scanf("%d",&a);
	printf("Enter the b= ");
	scanf("%d",&b);
	temp=a;
	a=b;
	b=temp;
	printf("After the Swapping values:\na= %d \nb= %d",a,b);
}
