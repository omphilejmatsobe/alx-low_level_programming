#include "main.h"

/**
 * print_number - function to print an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
unsigned int n1;

 if (n < 0)
 {
 n1 = -n;
 } else
 {
 n1 = n;
 }

 print_number(n1);
 
}
