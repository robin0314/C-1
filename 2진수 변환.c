//2진수 변환하기
#include <stdio.h>

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
}