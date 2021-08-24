#include <stdio.h>

int main()
{
	int N, measure = 2;

	scanf("%d", &N);
	while (N > 1)
	{
		if (N % measure == 0)
		{
			printf("%d\n", measure);
			N /= measure;
		}
		if (N % measure != 0)
			measure++;
	}
	return (0);
}
