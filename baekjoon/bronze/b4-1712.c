#include <stdio.h>

int main(void)
{
	size_t a, b, c, cycle;

	scanf("%zu %zu %zu", &a, &b, &c);
	if (b >= c)
		printf("-1\n");
	else
	{
		if (b + 1 == c)
		{
			printf("%zu\n", a + 1);
			return (0);
		}
		cycle = a / c;
		while (1)
		{
			if((a + (b * cycle)) < (c * cycle))
			{
				break;
			}
			cycle += 1;
		}
		printf("%zu\n", cycle);
	}
	return (0);
}
