#include <stdio.h>

static int ft_strlen(char *a)
{
	int	len = 0;

	while (*a != '\0')
	{
		len++;
		a++;
	}
	return (len);
}

static void ft_modify_arr(char *a, char *b, int size_a, int size_b)
{
	int		a_big = 0, b_big = 0, max;
	int		carry_before = 0, carry = 0, number;

	if (size_a > size_b)
	{
		a_big = size_a - size_b;
		max = size_a;
	}
	else
	{
		b_big = size_b - size_a;
		max = size_b;
	}
	a[size_a + b_big + 1] = '\0';
	b[size_b + a_big + 1] = '\0';
	while (size_a)
	{
		a[size_a + b_big] = a[size_a - 1];
		--size_a;
	}
	while (b_big >= 0)
	{
		a[b_big] = '0';
		--b_big;
	}
	while (size_b)
	{
		b[size_b + a_big] = b[size_b - 1];
		--size_b;
	}
	while (a_big >= 0)
	{
		b[a_big] = '0';
		--a_big;
	}
	while (max >= 0)
	{
		number = (a[max] - '0') + (b[max] - '0');
		if (number + carry_before >= 10)
		{
			carry = 1;
			number -= 10;
		}
		else
			carry = 0;
		a[max] = number + carry_before + '0';
		--max;
		carry_before = carry;
	}
}

int main(void)
{
	char	a[10003], b[10003], *answer;
	int		size_a, size_b;

	scanf("%s%s", a, b);
	size_a = ft_strlen(a);
	size_b = ft_strlen(b);
	ft_modify_arr(a, b, size_a, size_b);
	if (a[0] == '0')
		answer = a + 1;
	else
		answer = a;
	printf("%s\n", answer);
	return (0);
}
