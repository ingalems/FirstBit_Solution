// 10. Find Sum of first and last digit of given number. Input: n = 12345 Output: 6 (1 + 5)
#include<stdio.h>
void main(){
	int num,f,l,sum=0; 
	printf("Enter the Number : ");
	scanf("%d",&num);
	l=num%10;
	f=num;
	while(f>=10){
		f=f/10;
	}
	sum=f+l;
	printf("%d and %d summition of the : %d",f,l,sum);
}
