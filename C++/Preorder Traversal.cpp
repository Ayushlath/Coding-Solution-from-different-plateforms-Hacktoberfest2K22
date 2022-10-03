#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node *left, *right;
};
Node* newNode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}
void printPreorder(struct Node* node)
{
	if (node == NULL)
		return;
	cout << node->data << " ";
  
	printPreorder(node->left);

	printPreorder(node->right);
}

int main()
{
	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	cout << "\nPreorder traversal of binary tree is \n";
	printPreorder(root);

	return 0;
}
//Time Complexity: O(N)
//Space Complexity: If we don’t consider the size of the stack for function calls then O(1) otherwise O(h) where h is the height of the tree. 
