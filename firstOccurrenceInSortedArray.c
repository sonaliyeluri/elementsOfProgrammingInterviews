#include <stdio.h>
#include <stdlib.h>

int first(int a[], int low, int high, int key) {
	int mid;
	if (low <= high) {
		mid = low + (high - low)/2;
		if ((mid == 0 || key > a[mid-1]) && a[mid] == key)
			return mid;
		else if (key > a[mid])
			return first(a, mid+1, high, key);
		else
			return first(a, low, mid-1, key);
	}
}

int last(int a[], int low, int high, int key, int n) {
	int mid;
	if (low <= high) {
		mid = low + (high - low)/2;
		if ((mid == n || key < a[mid+1]) && a[mid] == key)
			return mid;
		else if (key < a[mid])
			return last(a, low, mid-1, key, n);
		else
			return last(a, mid+1, high, key, n);
	}
}

int main() {
	int a[] = {1, 2, 2, 2, 2, 3, 4, 7, 8, 8};
	int n = sizeof(a)/sizeof(a[0]);
	printf("First occurrence of 2: %d\n",first(a, 0, n-1, 2));
	printf("Last occurrence of 2: %d\n",last(a, 0, n-1, 2, n));
	printf("\n");
	return 0;
} 
