// 5. Check the given number is Armstrong number or not.. Input: n = 153 Output: Armstrong
#include<stdio.h>
void main(){
	int no,temp,sum=0,rem;
	printf("Enter the Number : ");
	scanf("%d",&no);
	temp=no;
	while(no>0){
		rem=no%10;
		sum=sum+(rem*rem*rem);
		no=no/10;
	}
	if(temp==sum){
		printf("%d Number is a Armstromg Number ",temp);
	}
	else{
		printf("%d Number is not a Armstrong Number",temp);
	}
	
}
