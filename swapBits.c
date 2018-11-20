#include <stdio.h>

long swapBits(long x, int i , int j) {
	if (((x>>i)&1) != ((x>>j)&1)) {
		long mask = (1L << i) | (1L << j);
		x = x ^ mask;
	}
	return x;
}

int main() {
	long n = 73;
	printf("%ld",swapBits(n, 1, 6));
	printf("\n");
	return 0;
}
