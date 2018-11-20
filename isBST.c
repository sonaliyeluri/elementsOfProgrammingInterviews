#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define INT_MIN -2147483648
#define INT_MAX 2147483647

struct tree {
	int data;
	struct tree *left;
	struct tree *right;
};

struct tree *newNode(int data) {
	struct tree *ptr = malloc(sizeof(struct tree));
	ptr->data = data;
	ptr->left = NULL;
	ptr->right = NULL;
	return ptr;
}

bool isBSTUtil(struct tree *root, int min, int max) {
	if (root == NULL)
		return 1;
	if (root->data < min || root->data > max)
		return 0;
	return isBSTUtil(root->left,min, root->data)&&isBSTUtil(root->right, (root->data)+1, max);
}

bool isBST(struct tree *root) {
	return isBSTUtil(root, INT_MIN, INT_MAX);
}

int main() {
	struct tree *root = NULL;
	root = newNode(8);
	root->left = newNode(3);
	root->right = newNode(10);
	root->left->left = newNode(1);
	root->left->right = newNode(6);
	root->right->right = newNode(14);
	root->left->right->left = newNode(4);
	root->left->right->right = newNode(9);
	root->right->right->left = newNode(13);
	printf("%s",isBST(root)?"True":"False");
	printf("\n");
	return 0;
}
