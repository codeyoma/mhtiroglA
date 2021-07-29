#include <stdio.h>

int ft_is_cro(char *line)
{
	char db[8][4] = {"c=", "c-", "d-", "lj", "nj", "s=", "z=", "dz="};
	int	i = 0;

	while (i < 8)
	{
		if (line[0] == db[i][0])
		{
			if (line[1] == db[i][1])
			{
				if (i == 7 && line[2] == db[i][2])
					return (3);
				if (i != 7)
					return (2);
			}
		}
		i++;
	}
	return (1);
}

int main(void)
{
	char str[101];
	char *temp;
	int	size = 0, cnt;

	scanf("%s", str);
	str[100] = '\0';
	temp = str;
	while (*temp != '\0')
	{
		cnt = ft_is_cro(temp);
		while (cnt--)
		{
			temp++;
		}
		size += 1;
	}
	printf("%d\n", size);
	return (0);
}
