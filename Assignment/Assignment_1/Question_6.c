// 6. Write a program to check whether a given character is uppercase or lowercase.
#include<stdio.h>
void main(){
	char ch;
	printf("Enter the Character : ");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z'){
		printf("%c Character is Uppercase",ch);
	}
	else if(ch>='a'&&ch<='z'){
		printf("%c Character is Lowercase",ch);
	}
	else{
		printf("Not a Alphabet");
	}
}
