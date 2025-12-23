//Write a C program to convert temperature from Celsius to Fahrenheit using the
//formula: F = (C *9/5) + 32

#include <stdio.h>
void main(){
	float cel,fahr;
	printf("Enter the Temperature of Celsius :");
	scanf("%f",&cel);
	fahr=(cel*9/5)+32;
	printf("Convert Temperature from celsius to fahrenheit : %f",fahr);
}
