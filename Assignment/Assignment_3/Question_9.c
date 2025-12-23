// 9. Check the given number is Palindrome number or not.  Input: n = 121  Output: Palindrome
#include<stdio.h>
void main(){
	int num,temp,rem,rev=0;
	printf("Enter the Number : ");
	scanf("%d",&num);
	temp=num;
	while(num>0){
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
//	for(int i=num;i>0;){
//		rem=i%10;
//		rev=rev*10+rem;
//		i=i/10;
//	}
	if(temp==rev){
		printf("%d is a Palindrome Number ",temp);
	}
	else{
		printf("%d is not a Palindrome Number ",temp);
	}
	
}
