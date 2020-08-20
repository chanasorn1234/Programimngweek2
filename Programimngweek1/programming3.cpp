#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{	
	char k[] = {'¨', 'º', 'â' , '»' , 'á' , '¡', 'Ã', 'Á'};
	float x,y;	
	printf("Enter Temp(F') : ");
	scanf("%f", &x);
	
	if (x >= 32)
	{
		y = (5 * (x - 32)) / 9;
		printf("Temp(F') = %.2f\n",y);
		for (int i = 0; i <= 7; i++)
		{
			printf("%c\n", k[i]);
		}
	}
	else
	{
		printf("Too cold to live");
	}

	return 0;
}