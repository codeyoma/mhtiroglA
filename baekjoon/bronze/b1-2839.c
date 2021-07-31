#include <stdio.h>

int main(void)
{
	int n, sum = 0;
	
	scanf("%d", &n);
	while (n >= 0)
	{
		if (n % 5 == 0)
		{
			sum += (n / 5);
			printf("%d\n", sum);
			return (0);
		}
		n -= 3;
		sum++;
	}
	printf("-1\n");
	return (0);
}
