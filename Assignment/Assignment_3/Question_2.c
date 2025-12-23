//Print table for given number. Input: n = 5  Output: 5 10 15 20 25 30 35 40 45 50
#include<stdio.h>
void main(){
	int num,table,i=1;
	printf("Enter the number : ");
	scanf("%d",&num);
	while(i<=10){
		table=num*i;
		printf("%d\n",table);
		i++;
	}
}
