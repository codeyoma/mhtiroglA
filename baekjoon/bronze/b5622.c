#include <stdio.h>

int main(void)
{
	int idx, idx2 = 0, sum = 0;
	char buf[16];
	char *alpha = "CFILOSVZ";
	buf[15] = '\0';

	scanf("%s", buf);
	while (buf[idx2])
	{
		idx = 0;
		while (alpha[idx])
		{
			if (alpha[idx] >= buf[idx2])
			{
				sum += idx + 3;
				break;
			}
			idx++;
		}
		idx2++;
	}
	printf("%d\n", sum);
	return (0);
}
