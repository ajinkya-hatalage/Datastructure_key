/*
Binary Tree :
1) adata stored in hirerchial form/ in level 
 ( Root -- Branches-- Leaf )
  Root - at 1st level
2) speaciality :
   har node ke maximum 2 children (left child and right child)
3) properties :
  i) maximum nodes at level L= 2L(2 to the power L);
  ii) Maximum nodes in atree of height H is 2H-1(2 to the power H-1)
  iii) For N nodes minimum possible height or minimum number of levels
       are  log2(n-1) .
   iv) A binary Tree with L leaves has 
      atleast log2(N+1)+1 number of levels .
*/
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;

    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    struct node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    /*
           1
          / \
         2   3 
    */
    root->left->left = new node(4);
    root->left->right = new node(5);
    /*
           1
          / \
         2   3
        / \
       4   5
    */
    return 0;
}