// 3. Write a program to check whether a given year is a leap year.
#include <stdio.h>
void main(){
	int year;
	printf("Enter the Year");
	scanf("%d",&year);
	if(year%4==0||year%400==0&&year%100!=0){
		printf("%d Year is leap Year",year);
	}
	else{
		printf("%d Year is not Leap Year",year);
	}
}
