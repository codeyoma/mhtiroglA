#include <stdio.h>

int ft_abs(int x)
{
	if (x >= 0)
		return (x);
	return (-x);
}

int main(void)
{
	int x, y, wid, hei, min;
	scanf("%d%d%d%d", &x, &y, &wid, &hei);
	min = hei;
	if (min > wid)
		min = wid;
	if (x < min)
		min = x;
	if (y < min)
		min = y;
	if (ft_abs(wid - x) < min)
		min = ft_abs(wid - x);
	if (ft_abs(hei - y) < min)
		min = ft_abs(hei - y);
	printf("%d\n", min);
	return (0);
}
