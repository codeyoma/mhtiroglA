#include <stdio.h>

void ft_sort(int *arr)
{
	int temp, idx = 0, jdx;

	while (idx < 3)
	{
		jdx = idx + 1;
		while (jdx < 3)
		{
			if (arr[idx] > arr[jdx])
			{
				temp = arr[idx];
				arr[idx] = arr[jdx];
				arr[jdx] = temp;
			}
			jdx++;
		}
		idx++;
	}
}

int main(void)
{
	int arr[3];

	while (1)
	{
		scanf("%d%d%d", &arr[1], &arr[2], &arr[0]);
		if (arr[1] == 0 && arr[2]== 0 && arr[0] == 0)
			break ;
		ft_sort(arr);
		if ((arr[2] * arr[2]) == (arr[1] * arr[1]) + (arr[0] * arr[0]))
			printf("right\n");
		else
			printf("wrong\n");
	}
	return (0);
}
