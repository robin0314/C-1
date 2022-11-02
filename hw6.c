#include <stdio.h>

int main()
{
	int i, cntodd=0, cnteven=0;
	int num[5], odd[5], even[5];

	printf("Please input five integers: ");
	for (i = 0; i < 5; i++) {
		scanf("%d", &num[i]);
	}
	//for (i = 0; i < 5; i++) {
	//	printf("%d", num[i]);
	//}
	for (i = 0; i < 5; i++) {
		if (num[i] % 2 == 0) {
			even[cnteven] = num[i];
			cnteven++;
		}
		else {
			odd[cntodd] = num[i];
			cntodd++;
		}
	}

	printf("Odd numbers: ");
	for (i = 0; i < cntodd; i++) {
		printf("%d ", odd[i]);
	}
	printf("\n");
	printf("Even numbers: ");
	for (i = 0; i < cnteven; i++) {
		printf("%d ", even[i]);
	}

	return 0;
}