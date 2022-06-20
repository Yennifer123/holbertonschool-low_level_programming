#include "main.h"
/**
 *_isupper -- checks for uppercase character.
 *@c: represents of the letter
 *Return: 1 uppercase or 0 otherwise
 */
int _isupper(int c)
{
int result = 0;
if (c >= 'A' && c <= 'Z')
{
result = 1;
}
return (result);
}

