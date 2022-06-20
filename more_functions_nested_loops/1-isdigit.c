#include "main.h"
/**
 *_isdigit -- checks for uppercase character.
 *@c: represents the digit
 *Return: 1 digit or 0 otherwise
 */
int _isdigit(int c)
{
int result = 0;
if (c >= '0'  && c <= '9')
{
result = 1;
}
return (result);
}

