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
//-----Deletion-------//
node *deleteathead(node *&head)
{
    if (head == NULL)
    {
        cout << "cant be delete as list is empty";
    }
    head = head->next;
    return head;
}
node *deleteatend(node *&head)
{
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    return head;
    delete (temp->next->next);
}
node *deleteafter(node *&head, int pos)
{
    node *temp = head;
    node *prev_node ;
    for (int i = 0; i < pos; i++)
    {
        prev_node = temp;
        temp = temp->next;
    }
    prev_node->next = temp->next;
    delete (temp);
    return head;
}

////////////////////
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
    cout << "\nDELETE AT HEAD :=\n";
    deleteathead(head);
    display(head);
    cout << "\nDELETE AT END :=\n";
    deleteatend(head);
    display(head);
    cout << "\nDELETE ATFTER AT given index :=\n";
    deleteafter(head,2);
    display(head);
}
// insertafter chukat ahe ajju
/*
// second way
#include <bits\stdc++.h>
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
//insertion
void insertattail(node *&head, int val)
{
    node *n = new node(val);
    //case
    if (head == NULL)
    {
        head = n;
        return;
    }
    /////
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void deleteathead(node*&head){
    node*todelete=head;
    head=head->next;
    delete todelete;
}
void deletion(node*&head,int val)
{
    //no node is present
     if(head==NULL)
     {
         return;
     }
    // if only one node is denorm_present
    if(head->next==NULL)
    {
        deleteathead(head);
        return;
    }
    node*temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node *todelete =temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


int main()
{
    node *head = NULL;
    insertattail(head, 1);
    insertattail(head, 2);
    insertattail(head, 3);
    insertattail(head, 4);
    display(head);
    cout << endl;
    deletion(head,3);
    display(head);
    deleteathead(head);
    display(head);
    

    return 0;
}
*/