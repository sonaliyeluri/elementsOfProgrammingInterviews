#include <stdio.h>

unsigned int reverseBits(unsigned int n){
	unsigned int no_bits = sizeof(n)*8;
	unsigned reverseNum = 0;
	for (int i=0;i<no_bits;i++) 
		if(n & (1 << i))
			reverseNum |= 1 << ((no_bits - 1) - i);
	return reverseNum;
}

int main() {
	unsigned int n = 1;
	printf("%u", reverseBits(n));
	printf("\n");
	return 0;
}
