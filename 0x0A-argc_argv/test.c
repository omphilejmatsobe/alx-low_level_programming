#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int x, c;
	

	for (x = 0; x < argc; x++)
	{
		c = atoi(argv[x]);
	}
	printf("%d\n", c);
	
	return(0);
}
