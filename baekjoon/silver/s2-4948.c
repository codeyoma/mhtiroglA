#include <stdio.h>

int main()
{
	int nbr[250001] = {0, }, input_nbr, max, cnt;

	nbr[0] = 1;
	nbr[1] = 1;
	for (int i = 2; i < 250001 / i; i++)
	{
		if (nbr[i] == 1)
			continue ;
		for (int j = i * i; j < 250001; j += i)
			if (j % i == 0)
				nbr[j] = 1;

	}
	while (1)
	{
		scanf("%d", &input_nbr);
		if (input_nbr == 0)
			break ;
		max = 2 * input_nbr;
		cnt = 0;
		input_nbr++;
		for (;input_nbr <= max; input_nbr++)
		{
			if (nbr[input_nbr] == 0)
				cnt++;
		}
		printf("%d\n", cnt);
	}
	return (0);
}

