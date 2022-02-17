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
//--reverse from k nodes in the list--
/* wedone using both iterative and recursive both
input : 1-> 2-> 3->4->5->6
k=2
output:2-> 1 ->4->3->6->5 
*/
node* reverseK(node*&head,int k)
{
    node *prev = NULL;
    node *curr = head;
    node *nextptr;
    int count = 0;
    while (curr!=NULL && count <k)
    {
        nextptr = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nextptr;
        count++;
    }
    if(nextptr!=NULL){
    head->next = reverseK(nextptr, k);
    }
    return prev; //new head;
}

/////
void insertattail(node*&head,int val){
    node *n = new node(val);
    node *temp=head;
    if(head==NULL)
    {
        head = n;
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next = n;
}
void display(node*head)
{
    node *temp = head;
    while(temp!=NULL)
    {
        cout << temp->data<< " ->";
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
    insertattail(head, 5);
    display(head);
    cout << endl;
    int k = 2;
    node *newhead = reverseK(head, k);
    display(newhead);
    return 0;
}
//time complexity := O(n)