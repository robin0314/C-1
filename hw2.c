#include <stdio.h>

int main()
{
	double km,mile;
	printf("Please enter kilometers: ");
	scanf("%lf", &km);

	mile = km / 1.609;
	printf("%.1fkm is equal to %.1fmiles.", km, mile);

	return 0;
}