#include "main.h"
/**
 *_supper -- checks for uppercase character.
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

