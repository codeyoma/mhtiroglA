#include <stdio.h>

int main(void)
{
	int cnt, nbr, idx, sum, t_sum = 0;

	scanf("%d", &cnt);
	while (cnt)
	{
		idx = 1;
		sum = 0;
		scanf("%d", &nbr);
		while (idx <= nbr)
		{
			if (nbr % idx == 0)
			{
				sum++;
				if (sum > 2)
					break ;
			}
			idx++;
		}
		if (sum == 2)
			t_sum++;
		cnt--;
	}
	printf("%d\n", t_sum);
	return (0);
}
