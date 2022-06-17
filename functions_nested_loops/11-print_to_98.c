#include "main.h"
/**
 *print_to_98 --  .
 *@n: is a number
 *Return: void
 */
void print_to_98(int n)
{
if (n <= 98)
{
for ( n = n; n <= 98; n++)
{
if (n >= 10)
{
_putchar('0' + n / 10);
_putchar('0' + n % 10);
}
else
{
if ( n >= 0)
{
_putchar('0' + n);
}
else 
{
_putchar(45);
if ( n >= -9)
{
_putchar('0' + (-1 * n));
}
else 
{
_putchar('0' + (-1 * n) / 10);
_putchar('0' + (-1 *n) % 10);
}
}
}
if (n != 98)
{
_putchar(44);
_putchar(32);
}
}
}
else 
{
for ( n = n; n >= 98; n--)
{
if (n >= 100)
{
int firstDigits = n / 10;
_putchar('0' + firstDigits / 10);
_putchar('0' + firstDigits % 10);
_putchar('0' + n % 10);
}
else
{
_putchar('0' + n / 10);
_putchar('0' + n % 10);
}
if (n != 98)
{
_putchar(44);
_putchar(32);
}
}
}
_putchar(10);
}

