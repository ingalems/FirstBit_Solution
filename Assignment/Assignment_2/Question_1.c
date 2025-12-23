// 1. Accept two numbers from user and an operator (+,-,/,*,%) based on that perform the
//desired operations.
#include<stdio.h>
void main(){
	int num1,num2;
	printf("Enter the two the Number\n");
	scanf("%d  %d",&num1,&num2);
	int add=num1+num2;
	printf("%d and %d addition is = %d\n",num1,num2,add);
	int sub=num1-num2;
	printf("%d and %d Subtraction is = %d\n",num1,num2,sub);
	int mul=num1*num2;
	printf("%d and %d Multiplication is = %d\n",num1,num2,mul);
	int div=num1/num2;
	printf("%d and %d Division is = %d\n",num1,num2,div);
	int mod=num1%num2;
	printf("%d and %d Modulas is = %d\n",num1,num2,mod);
}
