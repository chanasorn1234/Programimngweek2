#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x;
	printf("Enter Number : ");
	scanf("%d", &x);
	if (x > 0)
	{
		printf("> 0");
	}

	if (x < 0)
	{
		printf("< 0");
	}
	
	if (x == 0)
	{
		printf("= 0");
	}
	
	return 0;
}