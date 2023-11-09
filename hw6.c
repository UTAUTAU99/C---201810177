#include<stdio.h>

void odd(int* ptr)
{
	int i;
	printf("Odd numbers: ");
	for (i = 0; i < 5; ++i) {
		if (ptr[i] % 2 != 0)
			printf("%d ", ptr[i]);
	}
	printf("\b \n");
}

void even(int* ptr)
{
	int i;
	printf("Even numbers: ");
	for (i = 0; i < 5; ++i) {
		if (ptr[i] % 2 == 0)
			printf("%d ", ptr[i]);
	}
	printf("\b \n");
}

int main(void)
{
	int i,a[10];
	printf("Please input five integers: ");
	for (i = 0; i < 5; ++i) {
		scanf("%d", &a[i]);
	}
	odd(a);
	even(a);

	return 0;
}