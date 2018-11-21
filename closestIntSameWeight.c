#include <stdio.h>
#define no_bits 63

unsigned long closestInt(unsigned long n){
	for (int i=0;i<no_bits;i++)
		if (((n >> i) & 1) != ((n >> (i+1)) & 1)) {
			n ^= (1UL << i)|(1UL << (i+1));
			return n;
		}
}

int main() {
	unsigned long n = 6;
	printf("%lu", closestInt(n));
	printf("\n");
	return 0;
}
