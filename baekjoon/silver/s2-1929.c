#include <stdio.h>

int main()
{
	int M, N, i, j, arr[1000001] = {0, };

	arr[0] = 1;
	arr[1] = 1;
	for (i = 2; i < 1000001 / i; i++)
	{
		if (arr[i] == 1)
			continue ;
		for (j = i * i; j < 1000001; j += i)
			if (j % i == 0)
				arr[j] = 1;
	}
	scanf("%d%d", &M, &N);
	for (i = M; i <= N; i++)
		if (arr[i] == 0)
			printf("%d\n", i);
	return (0);
}
