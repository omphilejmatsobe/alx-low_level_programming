#include <stdlib.h>
#include <stdio.h>		

char *create_array(unsigned int size, char c);
char **strtow(char *str);
char *argstostr(int ac, char **av);
void free_grid(int **grid, int height);