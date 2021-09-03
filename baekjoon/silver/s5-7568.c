#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, temp = 0, bigger_cnt, idx;
	int *weight, *height;

	scanf("%d", &x);
	weight = malloc(sizeof(int) * x);
	height = malloc(sizeof(int) * x);
	while (temp < x)
	{
		scanf("%d%d", weight + temp, height + temp);
		temp++;
	}
	temp = 0;
	while (temp < x)
	{
		idx = 0;
		bigger_cnt = 1;
		while (idx < x)
		{
			if (temp == idx)
			{
				idx++;
				continue ;
			}
			if (height[temp] < height[idx] && weight[temp] < weight[idx])
				bigger_cnt++;
			idx++;
		}
		printf("%d", bigger_cnt);
		if (temp < x - 1)
			printf(" ");
		else
			printf("\n");
		temp++;
	}

	free(weight);
	free(height);
	return (0);
}
