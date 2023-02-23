#include <stdio.h>

/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 * Return:  (Success)
*/

int main(void)
{
	unsigned long int i;
	unsigned long int x = 1;
	unsigned long int y = 2;
	unsigned long int l = 1000000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu", x);
	for (i = 1; i <= 90; i++)
	{
		printf(", %lu", y);
		y += x;
		x = y - x;
	}

	bef1 = (x / l);
	bef2 = (x % l);
	aft1 = (y / l);
	aft2 = (y % l);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", aft1 + (aft2 / l));
		printf("%lu", aft2 % l);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}
