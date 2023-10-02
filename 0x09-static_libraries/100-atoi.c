#include "main.h"
/**
 * _atoi - converts the string to integers
 * @s: the string
 * Return: the integers the will represnt instead of string
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;

/* Find the first digit or sign */
while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{

/* Check if the first character is a sign */
if (s[i] == '-')
{
sign *= -1;
}
else if (s[i] != '+')
{
break;
}
i++;
}
/* Convert the subsequent characters to an integer */
while (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
i++;
}
result *= sign;
return (result);
}

