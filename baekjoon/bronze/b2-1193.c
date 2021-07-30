#include <stdio.h>

int main(void)
{
	int x, temp, idx = 0, odd;

	scanf("%d", &x);
	while (x > 0)
	{
		idx++;
		temp = x;
		temp--;
		x -= idx;
		if (idx % 2)
			odd = 1;
		else
			odd = 0;;
	}
	if (odd == 1)
	{
		printf("%d/%d\n", idx - temp, 1 + temp);
	}
	else
	{
		printf("%d/%d\n", 1 + temp,  idx - temp);
	}
	return (0);
}
