#include<stdio.h>
int main()
{
	float num;
	printf("Enter the number");
	scanf("%f",&num);
	if(num>0)
	{
		printf("%2f is a positive number",num);
	}
	else if(num<0)
	{
		printf("%f is a negative number",num);
	}
	else
	{
		printf("Number is zero");
	}
	return 0;
}
