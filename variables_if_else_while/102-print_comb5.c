#include <stdio.h>
/**
 * main - using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

int number_left = 0;
int number_right = 0;
int base = 10;

for (number_left = 0; number_left <= 99; number_left++)
{
for (number_right = 0; number_right <= 99; number_right++)
{
if (number_left < number_right)
{
putchar('0' + number_left / base);
putchar('0' + number_left % base);
putchar(' ');

putchar('0' + number_right / base);
putchar('0' + number_right % base);
if (number_left != 98 || number_right != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
return (0);
}

