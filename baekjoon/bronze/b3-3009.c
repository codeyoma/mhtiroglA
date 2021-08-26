#include <stdio.h>

int main()
{
	int arr[6], idx = 0, i;
	int dis[6] = {0, };
	int p_x, p_y;

	while (idx < 6)
	{
		scanf("%d", &arr[idx]);
		idx++;
	}

	idx= 0;
	while (idx < 4)
	{
		i = idx + 2;
		while (i < 6)
		{
			if (arr[idx] == arr[i])
			{
				dis[idx] = 1;
				dis[i] = 1;
			}
			i += 2;
		}
		idx++;
	}
	idx = 0;
	while (idx < 6)
	{
		if (idx % 2 == 0 && dis[idx] == 0)
			p_x = arr[idx];
		else if (idx % 2 == 1 && dis[idx] == 0)
			p_y = arr[idx];
		idx++;
	}
	printf("%d %d\n", p_x, p_y);
	return (0);
}

