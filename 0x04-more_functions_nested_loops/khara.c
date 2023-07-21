#include <stdio.h>
int main(void)
{
	int i;
	for(i = 10;i <= 10000; i++)
	{
		if (i % 10 == 0)
		{
		i = i * 10;
		}
		printf("%d", i);
	}
	return (0);
}
