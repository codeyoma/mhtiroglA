#include <stdio.h>

int	ft_factorial(int x)
{
	if (x <= 1)
		return (1);
	return (x * ft_factorial(x - 1));
}

int main()
{
	int input_nbr;

	scanf("%d", &input_nbr);
	printf("%d\n", ft_factorial(input_nbr));
	return (0);
}
