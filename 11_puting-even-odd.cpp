/*
Put even postion elements after odd position in linked list

ex : 
 ip := 1->2->3->4->5->6->NULL
 op := 1->3->5->2->4->6->NULL
*/
#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node *next;
        node(int val)
        {
            data = val;
            next = NULL;
        }
};
void insertattail(node*&head,int val)
{
    node *n = new node(val);
    if(head==NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node*head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout << temp->data << " ->";
        temp = temp->next;
    }
    cout << "NULL"<<endl;
}
void evenafterodd(node*&head)
{
    node *odd = head;
    node *even = head->next;
    node *evenstart = even;
    while(odd->next!=NULL && even->next!=NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        even->next = odd->next;
        even->next;
    }
    odd->next = evenstart;
    if(odd->next!=NULL)
    {
        even->next = NULL;
    }
}

int main()
{
    node *head = NULL;
    int arr[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 5;i++)
    {
        insertattail(head,arr[i]);
    }
    display(head);
    cout << "required ans :=" << endl;
    evenafterodd(head);
    display(head);

    return 0;
}
/*
output :
1 ->2 ->3 ->4 ->5 ->NULL
required ans :=
1 ->3 ->4 ->5 ->2 ->NULL

tc = O(n)
*/