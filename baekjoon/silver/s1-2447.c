#include <stdio.h>

void ft_star(int idx, int jdx, int pattern)
{
	if (((idx / pattern) % 3 == 1) && ((jdx / pattern) % 3 == 1))
	{
		printf(" ");
	}
	else if (pattern == 1)
		printf("*");
	else
		ft_star(idx, jdx, pattern / 3);
}

int main()
{
	int nbr, idx = 0, jdx;

	scanf("%d", &nbr);
	while (idx < nbr)
	{
		jdx = 0;
		while (jdx < nbr)
		{
			ft_star(idx, jdx, nbr);
			jdx++;
		}
		printf("\n");
		idx++;
	}
	return (0);
}
