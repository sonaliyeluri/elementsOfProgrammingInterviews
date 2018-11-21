#include <stdio.h>

long long gcd(long long x, long long y) {
	if (x == y)
		return x;
	else if (!(x & 1) && !(y & 1))
		return gcd(x >> 1, y >> 1) << 1;
	else if (!(x & 1) && y & 1)
		return gcd(x >> 1, y);
	else if (x & 1 && !(y & 1))
		return gcd(x, y >> 1);
	else if (x > y)
		return gcd(x - y, x);
	else if (x < y)
		return gcd(x, y - x);
}

int main() {
	long long x = 24;
	long long y = 300;
	printf("GCD(%lld, %lld) = %lld", x, y, gcd(x, y));
	printf("\n");
	return 0;
}
