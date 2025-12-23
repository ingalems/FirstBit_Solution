// 2. Write a program to check given 3 digit number is pallindrome or not.
#include <stdio.h>
void main(){
	int num,temp,rev=0,rem;
	printf("Enter the Number :");
	scanf("%d",&num);
	temp=num;//121
	rem=num%10;//1
	rev=rev*10+rem;//1  -> 0*10+1=1  ->0*10 = 0  + 1  = 1  then rev=1
	num=num/10;//12
	rem=num%10;//2
	rev=rev*10+rem;//12  ->1*10+2=12  -> 1*10 = 10  + 2  = 12  then rev=12
	num=num/10;//1
	rem=num%10;//1
	rev=rev*10+rem;//121  ->12*10+1=121  -> 12*10 = 120  + 1 =  121  then rev=121
	num=num/10;//0
	printf("%d\n",rev);
	if(temp==rev){
		printf("%d Number is Palindrome Number",rev);
	}
	else{
		printf("%d Number is Not a Palindrome Number",rev);
	}
	rev=2;
	rem=5;
	rev=rev*10+rem;
	printf("%d",rev);
	
	//second Logic
//	int f,m,l;
//	f=num/100;
//	m=(num/10)%10;
//	l=num%10;
//	if(f==l){
//		printf("Number is Palindrom number");
//	}
//	else{
//		printf("Number is Not a Palindrome Number");
//	}
	
	
	
}

