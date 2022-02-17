#include <iostream>
using namespace std;
//creatng a node
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
//insert at head
void insertathead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
    return;
}

//insert at tail
void insertattail(node *&head, int val)
{
    node *n = new node(val);
    //case
    if (head == NULL)
    {
        head = n;
        return;
    }
    //temp is used to traverse the list
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
//insert at index----------
void insertatmiddle(node *&head, int val, int pos)
{
    if(head==NULL)
    {
        cout << "LIST IS EMPTY :=";
    }
    node *n = new node(val);
    node *temp = head;
    for (int i = 0; i < pos;i++)
    {
        temp = temp->next;
    }
    temp->next=n;
    n->next = temp->next->next;
}

//--------------
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}
int main()
{
    node *head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    display(head);
    cout << "\n_______________\n";
    insertathead(head, 0);
    display(head);
    cout << "\n_______________\n";
    insertatmiddle(head, 4, 2);
    display(head);
     return 0;
}
//check insertion at middle 