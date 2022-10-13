/*#include <stdio.h>

int main()
{
	int n, a, b, binary = 0;
	int k = 1;

	printf("Please enter a number: ");
	scanf("%d", &n);

	while (1) {
		a = n / 2;
		b = n % 2;

		binary += b * k;
		k *= 10;

		if (a == 0) break;

		n = a;
	}

	printf("%d", binary);
}*/

#include <stdio.h>

void changetobinary(int num)
{
	if (num == 0 || num == 1) {
		printf("%d", num);
	}
	else {
		changetobinary(num / 2);
		printf("%d", num % 2);
	}
	return 0;
}

int main()
{
	int n;

	printf("Please enter a number: ");
	scanf("%d", &n);

	changetobinary(n);

	return 0;
}
