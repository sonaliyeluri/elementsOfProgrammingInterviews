#include <stdio.h>

void tower(int n, char a_rod, char c_rod, char b_rod) {
	if (n == 1) {
		printf("Move 1 disk from %c to %c\n", a_rod, c_rod);
		return;
	}
	tower(n-1, a_rod, b_rod, c_rod);
	printf("Move %d disk from %c to %c\n", n, a_rod, c_rod);
	tower(n-1, b_rod, c_rod, a_rod);
}

int main() {
	int n = 5;
	tower(n, 'A', 'C', 'B');
	return 0;	
}
