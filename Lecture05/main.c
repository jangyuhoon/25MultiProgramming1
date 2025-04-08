#include <stdio.h>

int main()
{
	int a, b, c;
	a = 6;
	b = 1;
	c = 1;

	while (a)
	{
		while (b)
		{
			printf("*");
			b = b - 1;
		}

		printf("\n");
		a = a - 1;
		c = c + 1;
		b = c;
	}
	return 0;
}