#include <stdio.h>



int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4 - i; j++)
		{
			printf(" ");
	
		}
		for (int k = 0; k < i; k++)
		{
			printf("*");
	
		}
		printf("\n");
	}

	for (int a = 0; a < 5; a++)
	{
		for (int c = 0; c < a - 1; c++)
		{
			printf(" ");
		}
		for (int b = 0; b < 5 - a; b++)
		{
			printf("*");
		}
	
		printf("\n");
	}

return 0;
}

/*
int main(void)
{


	for (int k = 0; k < 5; k++)
	{
		for (int l = 0; l < 5 - k; l++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}
*/
