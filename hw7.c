int main()
{
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };
	int* ptr1 = arr1;
	int* ptr2 = arr2;
	int tmp[6], i;

	for (i = 0; i < 6; i++) {
		tmp[i] = *(ptr1 + i);
		*(ptr1 + i) = *(ptr2 + i);
		*(ptr2 + i) = tmp[i];
	}

	printf("after swap\n");
	printf("arr1: ");
	for (i = 0; i < 6; i++) {
		printf("%d ", *(ptr1 + i));
	}
	printf("\n");
	printf("arr2: ");
	for (i = 0; i < 6; i++) {
		printf("%d ", *(ptr2 + i));
	}

	return 0;
}