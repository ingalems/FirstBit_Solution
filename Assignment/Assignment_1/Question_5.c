//5. Write a program to check whether a person is eligible to vote (age = 18)
#include<stdio.h>
void main(){
	int age;
	printf("Enter the Age of the Person : ");
	scanf("%d",&age);
	if(age>=18){
		printf("Person is eligible for the vote");
	}
	else{
		printf("Person is not eligible for the vote");
	}
}
