#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: is the first string
 * @s2: is the 2nd string
 * @n: the number of chars that will be concatenated 
 * from s2
 * Return: NULL if fails
 * if null passed treat it as an empty string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
