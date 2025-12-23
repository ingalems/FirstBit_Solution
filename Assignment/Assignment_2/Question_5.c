// 5. Accept the price from user. Ask the user if he is a student (user may say y or n). If he
//is a student and he has purchased more than 500 than discount is 20% otherwise
//discount is 10%.But if he is not a student then if he has purchased more than 600
//discount is 15% otherwise there is not discount.

#include<stdio.h>
void main(){
	char ch;
	int price; //Purchased price
	int disc; //Discount depends on purchased price
	printf("Are you Student (Answers is y or n)");
	scanf("%c",&ch);
	if(ch=='y'||ch=='Y'){
		printf("Enter the your Purchased billing price : ");
		scanf("%d",&price);
		if(price>=500){
			disc=0.20*price;
			printf("You have Discount of Rupees is : %d",disc);
		}
		else{
			disc=0.10*price;
			printf("You have Discount of Rupees is : %d",disc);
		}
	}
	else{
		if(ch=='n'&&ch=='N'){
			printf("Enter the your Purchased billing price : ");
			scanf("%d",&price);
			if(price>=600){
				disc=0.15*price;
				printf("You have Discount of Rupees is : %d",disc);
			}
			else{
				printf("Not a Discount on Rupees : %d",price);
			}
		}
		else{
			printf("Envalid Choise");
		}
	}
}
