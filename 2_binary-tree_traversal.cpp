/*
-----------(Binary tree traversal)-----------
1) preorder Traversal :
   root --> left subtree --> right subtree
   ex :
           1              preorder := (sequence)
          /  \             1,2,4,5,3,6,7
         2    3
        / \   / \
       4   5  6  7
2)inorder Traversal :
   (traverse left subtree)-->root-->(traverse right subtree)

           1              inorder := (sequence)
          /  \             4,2,5,1,6,3,7
         2    3
        / \   / \
       4   5  6  7
3)post order traversal:
  (left subtree)-->(right subtree)-->root

            1              postorder := (sequence)
          /  \             4,5,2,6,7,3,1
         2    3
        / \   / \
       4   5  6  7
*/
#include <bits\stdc++.h>
using namespace std;
struct node
{

    int data;
    struct node *left;
    struct node *right;
    node(int val)
    {
        data = val;
        right = NULL;
        left = NULL;
    }
};
void preorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
    /*
    output :
    1 2 4 5 3 6 7 
    */
}

void inorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
    /*
    output := 4 2 5 1 6 3 7
    */
}
void postorder(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
    /*
    output :=  4 5 2 6 7 3 1
    */
}

int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    //preorder(root);
   // inorder(root);
    postorder(root);
    return 0;
}