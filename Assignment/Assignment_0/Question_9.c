// 9. Write a C program to input the base and height of a triangle and calculate its area
#include <stdio.h>
void main(){
	float base,height,area;
	printf("Enter the Base of Triangle : ");
	scanf("%f",&base);
	printf("Enter the Height of Triangle :");
	scanf("%f",&height);
	area=0.5*(base*height);
	printf("Area of the Triangle is : %.2f",area);
}
