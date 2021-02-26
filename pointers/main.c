#include <stdlib.h>
#include <stdio.h>

int main() {
	const int SIZE_ARRAY = 2;

	int* number = (int*)malloc(SIZE_ARRAY * sizeof(int));

	int* head = number;

	*number = 1;

	printf("number: %i, address: %p\n", *number, number);

	number = number + 1 * sizeof(int);

	*number = 2;

	printf("number: %i, address: %p\n", *number, number);

	number = number - 1 * sizeof(int);

	printf("number: %i, address: %p\n", *number, number);

	number = number + 1 * sizeof(int);

	printf("number: %i, address: %p\n", *number, number);

	number = number - 1 * sizeof(int);

	free(head);

	return 0;
}
