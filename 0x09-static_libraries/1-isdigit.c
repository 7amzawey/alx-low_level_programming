#include "main.h"
/**
 * _isdigit - checks for digits form 0 to 9
 * @c: is the variable
 * Return: 1 if there is adigit 0 if not
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
