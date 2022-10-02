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
