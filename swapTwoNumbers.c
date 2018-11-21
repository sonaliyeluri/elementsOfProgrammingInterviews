#include <stdio.h>

void swap(int *x, int *y) {
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}

int main() {
	int x = 2;
	int y = 3;
	printf("x = %d, y = %d\n",x, y);
	swap(&x, &y);
	printf("x = %d, y = %d\n",x, y);
	return 0;
}

