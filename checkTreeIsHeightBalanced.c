#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

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

int max (int a, int b) {
	return a > b ? a : b;
}

int height(struct tree *root) {
	if (root == NULL)
		return 0;
	return 1+max(height(root->left), height(root->right));
}

bool isBalanced(struct tree *root) {
	if (root == NULL)
		return 1;
	int lh = height(root->left);
	int rh = height(root->right);
	if ((abs(lh - rh) <= 1) && isBalanced(root->left) && isBalanced(root->right))
		return 1;
	return 0;
}

int main() {
	struct tree *root = NULL;
	root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->left->left = newNode(5);
	root->right->right = newNode(6); 
	printf("%s",isBalanced(root)?"True":"False");
	printf("\n");
	return 0;
}
