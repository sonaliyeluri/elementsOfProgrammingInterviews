#include <stdio.h>

void swap(int *a, int *b);

void sort012(int a[], int n) {
	int low = 0;
	int high = n-1;
	int mid = 0;
	while (mid <= high) {
		switch(a[mid]) {
			case 0: swap(&a[low++], &a[mid++]);
				break;
			case 1: mid++;
				break;
			case 2: swap(&a[mid], &a[high--]);
				break;
		}
	}
}

void swap(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void printArray(int a[], int n) {
	for (int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

int main() {
	int a[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
	int n = sizeof(a)/sizeof(a[0]);
	printArray(a, n);
	sort012(a,n);
	printArray(a, n);
	printf("\n");
	return 0;
}
