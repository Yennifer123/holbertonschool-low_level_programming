#include "main.h"
/**
 *print_sign --  checks function that prints the sign of number.
 *@n: number of to compare
 *Return: 1 the sign on the number
 */
int print_sign(int n)
{
int result = 0;
if (n > 0)
{
result = 1;
_putchar('+');
}
else if (n == 0)
{
result = 0;
_putchar('0');
}
else
{
result = -1;
_putchar('-');
}
return (result);
}

