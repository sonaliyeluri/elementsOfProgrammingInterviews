#include <stdio.h>
#include <string.h>

int count(int n) {
	int table[n+1], i;
	memset(table, 0, sizeof(table));
	table[0] = 1;
	for (i=2;i<=n;i++)
		table[i] += table[i-2];
	for (i=3;i<=n;i++)
		table[i] += table[i-3];
	for (i=7;i<=n;i++)
		table[i] += table[i-7];
	return table[n];
}

int main() {
	int n = 20;
	printf("No of score combinations for %d: %d", n, count(n));
	printf("\n");
	return 0;
}
