#include <stdio.h>

int main(void)
{
	int up, down, goal, day;

	scanf("%d %d %d", &up, &down, &goal);
	day = (goal - down) / (up - down);
	if ((goal - down) % (up - down))
			day++;
	printf("%d\n", day);
	return (0);
}
