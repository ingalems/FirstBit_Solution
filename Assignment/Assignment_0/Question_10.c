// 10. Write a C program to input marks of five subjects, find the total marks, and calculate
//the percentage.
#include <stdio.h>
void main(){
	int c,cpp,java,python,dsa,total_marks;
	float per;
	printf("Enter the Marks one by one C, C++, Java, Python, DSA : \n");
	printf("C = ");
	scanf("%d",&c);
	printf("Cpp = ");
	scanf("%d",&cpp);
	printf("Java = ");
	scanf("%d",&java);
	printf("Python = ");
	scanf("%d",&python);
	printf("DSA = ");
	scanf("%d",&dsa);
	total_marks=c+cpp+java+python+dsa;
	per=total_marks/5;
	printf("Total Marks is : %d\n",total_marks);
	printf("Five Subject marks base Percentage is : %f",per);
	
}
