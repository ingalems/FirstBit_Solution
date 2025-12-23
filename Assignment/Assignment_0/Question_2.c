//Write a C program to find the area of a circle.
#include <stdio.h>
void main(){
	float r,area,pi=3.14;
	printf("Enter the redius :");
	scanf("%f",&r);
	area=pi*r*r;
	printf("Area of the circle is : %2f",area);
}
