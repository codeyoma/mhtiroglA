#include <stdio.h>

int ft_fibo(int x)
{
	if (x == 0 || x == 1)
		return (x);
	return (ft_fibo(x - 1) + ft_fibo(x - 2));
}

int main()
{
	int nbr;

	scanf("%d", &nbr);
	printf("%d\n", ft_fibo(nbr));
	return (0);
}
