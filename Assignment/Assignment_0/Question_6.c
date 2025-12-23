//Write a C program to find the square and cube of a given number
#include <stdio.h>
void main(){
	int num,square,cube;
	printf("Enter the any Number : ");
	scanf("%d",&num);
	square=num*num;
	cube=num*num*num;
	printf("%d Square is = %d\n",num,square);
	printf("%d cube is = %d",num,cube);
}
