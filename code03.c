#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the character");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90)
	{
		printf("%c is an uppercase alphabet",ch);
	}
	else
	{
		printf("%c is a lowercase alphabet",ch);
	}
	return 0;
}
