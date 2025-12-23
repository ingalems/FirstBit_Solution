//Write a C program to input five numbers and find their average.
#include <stdio.h>
void main(){
	float n1,n2,n3,n4,n5,sum=0;
	float avg;
	printf("Enter the Five Number :");
	scanf("%f %f %f %f %f",&n1,&n2,&n3,&n4,&n5);
	sum=n1+n2+n3+n4+n5;
	avg=sum/5;
	printf("those five number average is : %.2f",avg);
}
