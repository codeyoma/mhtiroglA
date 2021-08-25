#include <stdio.h>

int main()
{
	int arr[10001] = {0, }, i, j;

	arr[0] = 1;
	arr[1] = 1;
	for (i = 2; i < 10001 / i; i++)
	{
		if (arr[i] == 1)
			continue ;
		for (j = i * i; j < 10001; j += i)
			if (j % i == 0)
				arr[j] = 1;
	}

	int input_cycle, input_nbr, min_prime, max_prime, mid_nbr;
	scanf("%d", &input_cycle);
	while (input_cycle)
	{
		scanf("%d", &input_nbr);
		mid_nbr = input_nbr / 2;
		min_prime = 0;
		max_prime = 0;
		if (arr[mid_nbr] == 0)
		{
			min_prime = mid_nbr;
			max_prime = mid_nbr;
		}
		else
		{
			while (1)
			{
				mid_nbr++;
				if (arr[mid_nbr] == 0)
				{
					if (arr[input_nbr - mid_nbr] == 0)
					{
						max_prime = mid_nbr;
						min_prime = input_nbr - mid_nbr;
						break ;
					}
				}
			}
		}
		printf("%d %d\n", min_prime, max_prime);
		input_cycle--;
	}
	return (0);
}
