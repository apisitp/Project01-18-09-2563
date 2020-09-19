#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
	int main()
	{
		int x, y, z,a,i=30;

		printf("Enter total cost  :	");
		scanf("%d", &x);
		printf("Enter the time in hours:	");
		scanf("%d", &y);
		printf("Enter the time in minutes:	");
		scanf("%d", &z);
		printf("Parking fee:	");
		
		if (z > 0)
		{
			y=y+1;
			if (x >= 1000)
			{
				y=y - 4;
				if (y < 1)
				{
					printf("free");
				}
				else
				{
						a = y * i;
						printf(" %d baht", a);
					
				}
			}
			else
			{
				y=y - 1;
				if (y < 1)
				{
					printf("free");
				}
				else
				{
					a = y * i;
					printf(" %d baht", a);

				}
			}

		}
		else
		{
			if (x >= 1000)
			{
				y=y - 4;
				if (y < 1)
				{
					printf("free");
				}
				else
				{
					a = y * i;
					printf(" %d baht", a);

				}
			}
			else
			{
				y=y - 1;
				if (y < 1)
				{
					printf("free");
				}
				else
				{
					a = y * i;
					printf(" %d baht", a);

				}
			}
		}
	
	}