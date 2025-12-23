// 6.Check the given number is Perfect number or not. Input: n = 28 Output: Perfect
#include<stdio.h>		// 28 :  1+2+4+7+14=28
void main(){
	int num,sum=0;
	printf("Enter the Number :");
	scanf("%d",&num);
	for(int i=1;i<num;i++){
		if(num%i==0){
			sum=sum+i;
		}
	}
	if(num==sum){
		printf("%d is Perfect Number ",sum);
	}
	else{
		printf("%d is Not a Perfect Number",sum);
	}
	
}
