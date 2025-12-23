// 4. Check the given number is prime or not. Input: n = 7 Output: Prime
#include<stdio.h>
void main(){
	int num,i=2,temp=0;
	printf("Enter the number : ");
	scanf("%d",&num);
	while(i<=num){
		if(num%i==0){
			temp++;
		}
		i++;
	}
	if(temp==1){
		printf("%d number is Prime Number",num);
	}
	else{
		printf("%d Number is Not Prime Number",num);
	}
}
