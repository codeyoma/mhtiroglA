#include <stdio.h>

void check_init(char *check)
{
	int cnt = 0;

	while (cnt < 26)
	{
		(check)[cnt] = '0';
		cnt++;
	}
}

int main(void)
{
	int idx, s = 0, e = 0, answer = 0, jude;
	char check[26];
	char line_temp;

	scanf("%d", &idx);
	char line[idx][101];
	while (s < idx)
	{
		scanf("%s", line[s]);
		s++;
	}

	s = 0;
	while (s < idx)
	{
		check_init(check);
		e = 0;
		jude = 0;
		while (line[s][e] != '\0')
		{
			line_temp = line[s][e];
			if ((check[line_temp - 'a'] == '1') && (line[s][e - 1] != line_temp))
			{
				jude = 1;
				break ;
			}
			else
			{
				check[line_temp - 'a'] = '1';
			}
			e++;
		}
		if (jude == 0)
			answer++;
		s++;
	}
	printf("%d\n", answer);
	return (0);
}
