//8 Check the given number is Strong number or not. Input: n = 145 Output: Strong
#include<stdio.h>
void main(){
	int num,temp,rem,sum=0;
	printf("Enter the Number :");
	scanf("%d",&num);
	temp=num;
	while(num>=1){
		rem=num%10;
		int fact=1;
		for(int i=1;i<=rem;i++){
			fact=fact*i;
		}
		sum=sum+fact;
		num=num/10;	
	}
	if(temp==sum){
		printf("%d is Strong Number",temp);
	}
	else{
		printf("%d is not Strong Number",temp);
	}
}
