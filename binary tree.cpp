#include <iostream>
using namespace std;
  
// Structure of the Binary Tree
struct treenode {
    int info;
    struct treenode *left,
        *right;
};
  
// Function to create the Binary Tree
struct treenode* create()
{
    int data;
    struct treenode* tree;
  
    // Dynamically allocating memory
    // for the tree-node
    tree = new treenode;
  
    cout << "\nEnter data to be inserted "
         << "or type -1 for no insertion : ";
  
    // Input from the user
    cin >> data;
  
    // Termination Condition
    if (data == -1)
        return 0;
  
    // Assign value from user into tree
    tree->info = data;
  
    // Recursively Call to create the
    // left and the right sub tree
    cout << "Enter left child of : "
         << data;
    tree->left = create();
  
    cout << "Enter right child of : "
         << data;
    tree->right = create();
  
    // Return the created Tree
    return tree;
};
  
// Function to perform the inorder
// traversal of the given Tree
void inorder(struct treenode* root)
{
    // If root is NULL
    if (root == NULL)
        return;
  
    // Recursively call for the left
    // and the right subtree
    inorder(root->left);
    cout << root->info << "  ";
    inorder(root->right);
}
  
// Driver Code
int main()
{
    // Root Node
    struct treenode* root = NULL;
  
    // Function Call
    root = create();
  
    // Perform Inorder Traversal
    inorder(root);
  
    return 0;
}
  

