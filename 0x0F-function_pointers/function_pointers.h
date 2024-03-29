#ifndef _FUNCTION_POINTERS_
#define _FUNCTION_POINTERS_

#include <stdio.h>
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));

#endif /* _FUNCTION_POINTERS_ */
