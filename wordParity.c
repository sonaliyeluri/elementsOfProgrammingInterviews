#include <stdio.h>

int parity(int n) {
	int countBits = 0;
	while(n) {
		countBits += (n&1);
		n = n>>1;
	}
	return countBits;
}

int main() {
	int n = 7;
	printf("%d",(parity(n) % 2 == 0) ? 0 : 1);
	printf("\n");
	return 0;
}
