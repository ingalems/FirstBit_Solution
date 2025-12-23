// 7. Accept the age and check if the person is:
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)
#include<stdio.h>
void main(){
	int age;
	printf("Enter the age of the Person : ");
	scanf("%d",&age);
	if(age<12){
		printf("Person is Child");
	}
	else{
		if(age>=12&&age<=19){
			printf("Person is Teenager");
		}
		else{
			if(age>=20&&age<=59){
				printf("Person is Adult");
			}
			else{
				if(age>=60){
					printf("Person is Senior");
				}
				else{
					printf("Not Valid Age");
				}
			}
		}
	}
}
