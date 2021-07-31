#include <stdio.h>

int main(void)
{
	int cycle, h, w, n, front, rear, temp;

	scanf("%d", &cycle);
	while (cycle--)
	{
		scanf("%d %d %d", &h, &w, &n);
		temp = 1;
		while (n - h > 0)
		{
			temp++;
			n -= h;
		}
		if (temp < 10)
		{
			printf("%d0%d", n, temp);
		}
		else
		{
			printf("%d%d", n, temp);
		}
		printf("\n");
	}
	return (0);
}
