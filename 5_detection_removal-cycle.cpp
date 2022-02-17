/*
---(Detection and removal of cycle inthe linked list)--

based on floyds algorithm or hair and Tortoise algorith

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
//-------------main code
bool hascycle(node *head)
{

    if (head == NULL || head->next == NULL)
    {
        cout << "NO LOOP FOUND :=";
        return false;
    }

    node *slow = head;
    node *fast = head;
    while (fast && slow && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow==fast)
        {
           
            cout << " LOOP IS FOUND:=\n";
             return 1;
        }
    }

    return 0;
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
    head->next->next->next->next->next = head;
    cout << endl;
    hascycle(head);
    return 0;
}
//time complexity :O(n);