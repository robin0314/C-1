#include <stdio.h>

struct info
{
	char city[20];
	char country[20];
	int popul;
};
int main()
{
	struct info arr[4];
	int i;
	printf("Input three cities:\n");
	for (i = 1; i < 4; i++) {
		printf("Name> ");
		scanf(" %[^\n]s", arr[i].city);
		printf("Country> ");
		scanf(" %[^\n]s", arr[i].country);
		printf("Population> ");
		scanf("%d", &arr[i].popul);
	}

	printf("Printing the three cities:\n");
	for (i = 1; i < 4; i++) {
		printf("%d. %s in %s with a population of %d people\n", i, arr[i].city, arr[i].country, arr[i].popul);
	}

	return 0;
}