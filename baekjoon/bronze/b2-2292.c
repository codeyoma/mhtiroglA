#include <stdio.h>

int main(void)
{
	int cycle = 1, n;

	scanf("%d", &n);
	while (n > 1)
	{
		n -= (6 * cycle);
		cycle++;
	}
	printf("%d\n", cycle);
	return (0);
}
