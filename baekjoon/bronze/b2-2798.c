#include <stdio.h>
#include <stdlib.h>

int main()
{
	int card, score, max = 0, temp, idx = 0, jdx, kdx;
	int *arr;

	scanf("%d %d", &card, &score);
	arr = malloc(sizeof(int) * card);
	while (idx < card)
	{
		scanf("%d", arr + idx);
		idx++;
	}
	idx = 0;
	while (idx < card - 2)
	{
		jdx = idx + 1;
		while (jdx < card - 1)
		{
			kdx = jdx + 1;
			while (kdx < card)
			{
				temp = arr[idx] + arr[jdx] + arr[kdx];
				if (temp > max && temp <= score)
					max = temp;
				kdx++;
			}
			jdx++;
		}
		idx++;
	}
	printf("%d\n", max);
	free(arr);
	return (0);
}
