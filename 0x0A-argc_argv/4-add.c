#include "stdlib.h"
#include "stdio.h"
#include "ctype.h"

int check_int(char *s);

/**
 * main - adds positive numebers
 * @argc: number of arguments
 * @argv: pointer to the array of string of arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int check;
	int x = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (check = 1; check < argc; check++)
	{
		if(check_int(argv[check]) == 1)
		{
			return (1);
		}

		x += atoi(argv[check]);
	}

	printf("%d\n", x);
	return (0);
}
/**
 * check_int - checks if input has only digits
 *
 *
 */
int check_int(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if(!isdigit(s[x]))
		{
			printf("Error\n");
			return (1);
		}
	}

	return (0);
}
