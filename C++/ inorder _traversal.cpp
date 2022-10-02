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
 

void printInorder(struct Node* node)
{
    if (node == NULL)
        return;
 
   
    printInorder(node->left);
 
    
    cout << node->data << " ";
 
    
    printInorder(node->right);
}
//Time Complexity: O(N)
// Space Complexity: If we don’t consider the size of the stack for function calls then O(1) otherwise O(h) where h is the height of the tree. 
