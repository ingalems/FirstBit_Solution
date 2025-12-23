// 3. Write a program to find greatest of three numbers using nested if-else
#include<stdio.h>
void main(){
	int n1,n2,n3;
	printf("Enter the Three Number one by one :\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2){
		printf(" %d Number is Greater ",n1);
	}
	else{
		if(n2>n3){
			printf(" %d Number is Greater ",n2);
		}
		else{
			printf(" %d Number is Greater ",n3);
		}
	}
}
