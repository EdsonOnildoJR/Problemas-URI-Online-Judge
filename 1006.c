#include <stdio.h>

int main()
{
	double a, b, c;

	scanf("%lf%lf%lf", &a, &b, &c);

	printf("MEDIA = %.1lf\n", (a*0.2+b*0.3+c*0.5));

	return 0;
}
