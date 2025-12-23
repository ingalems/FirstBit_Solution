// 7. Find factorial of given number. Input: n = 5 Output: 120
#include<stdio.h>
void main(){
	int num, fact=1;
	printf("Enter the Number :");
	scanf("%d",&num);
	for(int i=1;i<=num;i++){
		fact=fact*i;
	} 
	printf("%d factorial is %d",num,fact);
}
