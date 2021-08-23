#include <stdio.h>

int ft_isprime(int nbr)
{
	int idx = 1, measure = 0;

	while (idx <= nbr)
	{
		if (nbr % idx == 0)
		{
			measure++;
			if (measure > 2)
				break ;
		}
		idx++;
	}
	if (measure == 2)
		return (nbr);
	return (0);
}

int ft_ismin(int dst, int nbr)
{
	if (dst > nbr)
		return (nbr);
	else
		return (dst);;
}

int main()
{
	int ft_begin, ft_end, temp = 0, sum = 0, ft_min = 0;

	scanf("%d%d", &ft_begin, &ft_end);
	while (ft_begin <= ft_end)
	{
		temp = ft_isprime(ft_begin);
		if (temp)
		{
			if (ft_min == 0)
				ft_min = temp;
			ft_min = ft_ismin(ft_min, temp);
			sum += temp;
		}
		ft_begin++;
	}
	if (sum == 0)
		printf("-1\n");
	else
		printf("%d\n%d\n", sum, ft_min);
	return (0);
}
