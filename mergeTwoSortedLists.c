#include <stdio.h>
#include <stdlib.h>

struct list {
	int data;
	struct list *next;
};

struct list *newNode(int data) {
	struct list *ptr = malloc(sizeof(struct list));
	ptr->data = data;
	ptr->next = NULL;
	return ptr;
}

void printList(struct list *head) {
	while (head != NULL) {
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

struct list *mergeSortedLists(struct list *l1, struct list *l2) {
	if (l1 == NULL && l2 == NULL)
		return NULL;
	else if (l1 == NULL && l2 != NULL)
		return l2;
	else if (l1 != NULL && l2 == NULL)
		return l1;
	else if (l1->data < l2->data) {
		l1->next = mergeSortedLists(l1->next, l2);
		return l1;
	}
	else {
		l2->next = mergeSortedLists(l1, l2->next);
		return l2;
	}	
}

int main() {
	struct list *l1, *l2;
	l1 = newNode(1);
	l1->next = newNode(2);
	l1->next->next = newNode(3);
	l2 = newNode(1);
	l2->next = newNode(3);
	l2->next->next = newNode(4);
	printList(l1);
	printList(l2);
	struct list *res;
	res = mergeSortedLists(l1, l2);
	printList(res);
	printf("\n");
	return 0;
}
	
	
