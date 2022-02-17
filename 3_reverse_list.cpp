/*
To reverse the list we use 3 pointers
*/
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
//----------reverse list by recursive function_----------------
node* reverse_recursive(node*&head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node *newhead = reverse_recursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}



//
//-------reverse the list by iterative method------
node *reverse(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    node *next;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }
    head = prev; //it is a new head
    return head;
}
//
void insertattail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ->";
        temp = temp->next;
    }
    cout << "NULL";
}
int main()
{
    node *head = NULL;
    insertattail(head, 10);
    insertattail(head, 20);
    insertattail(head, 30);
    insertattail(head, 40);
    insertattail(head, 50);
    insertattail(head, 60);
    display(head);
    cout << "\nreverse list using iteratve method\n";
    reverse(head);
    display(head);
    cout << "\nreverse list using recursive method\n";
    node *newhead = reverse_recursive(head);
    display(newhead);
    return 0;
}
/*
output :=

10 ->20 ->30 ->40 ->50 ->60 ->NULL
reverse list using iteratve method
60 ->50 ->40 ->30 ->20 ->10 ->NULL
reverse list using recursive method
10 ->20 ->30 ->40 ->50 ->60 ->NULL
*/
