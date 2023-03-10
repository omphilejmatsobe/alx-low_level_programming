#include <stdio.h>
#include <stdlib.h>
/**
 *main - prints name of the program
 *@argc: argumnet controll
 *@argv: argument vector
 *
 *return : Always 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);
	return (0);
}
