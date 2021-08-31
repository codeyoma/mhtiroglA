#include <stdio.h>

void ft_hanoi(int x, int cur_pos, int tar_pos)
{
	int oth_pos = 6 - cur_pos - tar_pos;

	if (x == 0)
		return ;
	ft_hanoi(x - 1, cur_pos, oth_pos);
	printf("%d %d\n", cur_pos, tar_pos);
	ft_hanoi(x - 1, oth_pos, tar_pos);
}

int main()
{
	int nbr;

	scanf("%d", &nbr);
	printf("%d\n", (1 << nbr) - 1);
	ft_hanoi(nbr, 1, 3);
	return (0);
}
