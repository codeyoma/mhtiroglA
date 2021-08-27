#include <stdio.h>

int ft_abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (-x);
}
int main()
{
	int arr[6], cycle, idx, max, dis, x, y, add, sub, answer;
	scanf("%d", &cycle);
	while (cycle)
	{
		idx = 0;
		answer = 0;
		while (idx < 6)
		{
			scanf("%d", arr + idx);
			idx++;
		}
		x = ft_abs(arr[0] - arr[3]);
		y = ft_abs(arr[1] - arr[4]);
		dis = (x * x) + (y * y);
		if (arr[2] > arr[5])
			max = 2;
		else
			max = 5;
		add = (arr[2] + arr[5]) * (arr[2] + arr[5]);
		sub = (arr[max] - arr[7 - max]) * (arr[max] - arr[7 - max]);
		if (dis == 0 && sub == 0)
			answer = -1;
		else if (dis < add && sub < dis)
			answer = 2;
		else if (dis == sub || dis == add)
			answer = 1;
		else
			answer = 0;
		printf("%d\n", answer);
		cycle--;
	}
	return (0);
}
