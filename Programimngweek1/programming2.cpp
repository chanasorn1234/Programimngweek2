#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{	
	int x;
	printf("Enter Number : ");
	scanf("%d", &x);
	for (int i = 1; i <= x; i++)
	{

		for (int n = 1; n <= i; n++)
		{
			printf("%d", n);
		}
		printf("\n");
	
	}
	
	return 0;
}