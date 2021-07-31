#include <stdio.h>

int	ft_fibo(int k, int n)
{
	if (n == 1)
		return (1);
	if (k == 0)
		return (n);
	return ( ft_fibo(k - 1, n) + ft_fibo(k, n - 1));
}

int main(void)
{
	int cycle, k, n, temp;
	int sum, i;
	scanf("%d", &cycle);
	while (cycle--)
	{
		scanf("%d%d", &k, &n);
		printf("%d\n", ft_fibo(k, n));
	}
	return (0);
}
