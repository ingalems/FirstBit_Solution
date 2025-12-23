// 2. Accept three sides of a triangle from the user and determine whether the triangle is
// equilateral, isosceles, or scalene
#include<stdio.h>
void main(){
	int side1,side2,side3;
	printf("Enter the Value of the side one by one :\n");
	scanf("%d %d %d",&side1,&side2,&side3);
	if(side1==side2&&side2==side3){
		printf("This Triangle is Equilateral");
	}
	else if(side1==side2||side2==side3||side1==side3){
		printf("This Triangle is Isosceles ");
	}
	else{
		printf("This Triangle is Scalene");
	}
}
