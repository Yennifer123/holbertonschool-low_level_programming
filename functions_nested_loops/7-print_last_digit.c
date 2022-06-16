#include "main.h"
/**
 *print_last_digit --  checks of the last digit
 *@n: number to get the last digit
 *Return: last digit of the number
 */
int print_last_digit(int n)
{
int lastDigit = 0;
if (n < 0)
{
n = n * -1;
}
lastDigit = n % 10;
_putchar('0'+ lastDigit);
return (lastDigit);
}
