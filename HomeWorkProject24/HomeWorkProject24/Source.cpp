#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int CarPark(int x, int y);
int main()
{
	int a, b, c = 0, n, shopping;
	printf("Enter Hour : ");
	scanf("%d", &a);
	printf("Enter Minute : ");
	scanf("%d", &b);
	printf("Enter shopping : ");
	scanf("%d", &shopping);
	if (shopping >= 1000)
	{
		if (a <= 4 && b == 0)
		{
			printf("Free!");
		}
		else
		{
			if (b == 0)
			{
				n = a - 4;
				CarPark(n + c, b);
			}
			else if (b / 60 != 1)
			{
				n = a - 4;
				c = c + 1;
				CarPark(n + c, b);
			}
		}
	}
	else
	{
		if (a <= 1 && b == 0)
		{
			printf("Free!");
		}
		else
		{
			if (b == 0)
			{
				CarPark(a + c, b);
			}
			else if (b / 60 != 1)
			{
				c = c + 1;
				CarPark(a + c, b);
			}
		}
	}

	return 0;
}
int CarPark(int x, int y)
{
	int i;
	if (x < 0 or y < 0)
	{
		printf("it can't be negative'");
	}
	else
	{
		if (x > 0)
		{
			i = x * 30;
			printf("You must pay Parking fee %d bath", i);
			return i;
		}
		else
		{
			printf("Free!");
		}
	}
}