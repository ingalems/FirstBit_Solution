// 8.Write a C program to input the length and width of a rectangle and find its perimeter.
#include <stdio.h>
void main(){
	float length,width,per;
	printf("Enter the length of the Rectangle : ");
	scanf("%f",&length);
	printf("Enter the width of the Rectangle : ");
	scanf("%f",&width);
	per=2*(length+width);
	printf("Rectangle Perimeter is : %f",per);
}
