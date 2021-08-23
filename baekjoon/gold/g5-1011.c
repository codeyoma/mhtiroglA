#include <stdio.h>

int ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int	ft_recur_min(int x, int y, int size, int *cycle)
{
	if (x == y || x > y)
		return (0);
	if (ft_abs(x - y) <= size)
	{
		*cycle += 1;
		return (0);
	}
	*cycle += 2;
	return (ft_recur_min(x + size, y - size, size + 1, cycle));
}

void	ft_min_cycle(int x, int y)
{
	int cycle = 0;

	ft_recur_min(x, y, 1, &cycle);
	printf("%d\n", cycle);
}

int main()
{
	int cycle, x, y;

	scanf("%d", &cycle);
	while (cycle)
	{
		scanf("%d%d", &x, &y);
		ft_min_cycle(x, y);
		cycle--;
	}
	return (0);
}
