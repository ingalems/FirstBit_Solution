//4. Write a program to check whether a given character is a vowel or consonant.
#include<stdio.h>
void main(){
	char ch;
	printf("Enter the Character : ");
	scanf("%c",&ch);
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
		printf("%c Character is Vowel",ch);
	}
	else{
		printf("%c Character is not Vowel",ch);
	}
}
