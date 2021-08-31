#include <stdio.h>

int ft_size(int nbr)
{
	int cnt = 0;

	while (nbr > 0)
	{
		cnt++;
		nbr /= 10;
	}
	return (cnt);
}

int ft_init_nbr(int cnt)
{
	int nbr = 1, idx = 0;

	while (idx < cnt - 2)
	{
		nbr *= 10;
		idx++;
	}
	return (nbr);
}

int ft_calcul(int nbr, int target, int target_size)
{
	int add = 0, jdx, cnt, cnt_temp, nbr_temp = nbr;

	cnt = ft_size(nbr);
	while (cnt)
	{
		cnt_temp = cnt - 1;
		jdx = 1;
		while (cnt_temp)
		{
			jdx *= 10;
			cnt_temp--;
		}
		add += (nbr / jdx);
		nbr -= (nbr / jdx) * jdx;
		cnt--;
	}
	if (nbr_temp + add == target)
		return (nbr_temp);
	return (0);
}

int main()
{
	int nbr, size, init_nbr, answer = 0, iszero = 0;

	scanf("%d", &nbr);
	size = ft_size(nbr);
	init_nbr = ft_init_nbr(size);
	while (init_nbr <= nbr)
	{
		answer = ft_calcul(init_nbr, nbr, size);
		if (answer != 0)
		{
			printf("%d\n", answer);
			iszero = 1;
			break ;
		}
		init_nbr++;
	}
	if (iszero == 0)
		printf("0\n");
	return (0);
}
