#include <stdio.h>
#define PI 3.14159265358979323846

int main(void)
{
	int r;

	scanf("%d", &r);
	printf("%.6lf\n", r * r * PI);
	printf("%.5lf\n", r * r * 2.0);
	return (0);
}
