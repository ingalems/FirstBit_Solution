// 7.Calculating total salary based on basic. If basic <=5000 da, ta and hra will be
//10%,20% and 25% respectively otherwise da, ta and hra will be 15%,25% and 30% respectively.
#include<stdio.h>
void main(){
	int basic,da,ta,hra,total;
	printf("Enter the basic salary : ");
	scanf("%d",&basic);
	if(basic<=5000){
		da=0.10*basic;
		ta=0.20*basic;
		hra=0.25*basic;
	}
	else{
		da=0.15*basic;
		ta=0.25*basic;
		hra=0.30*basic;
	}
	total=basic+da+ta+hra;
	printf("Calculating total salary based on basic : %d",total);
}
