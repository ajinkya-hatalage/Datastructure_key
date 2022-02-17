//nothing but insert at head
#include <iostream>
using namespace std;
class stack
{
public:
    int top;
    stack *next;
    stack(int val)
    {
        top = val;
        next = NULL;
    }
};
void push(stack *&head, int x)
{
    stack *n = new stack(x);
   
    n->next = head;
    head=n;
}
void display(stack*head)
{
    stack *temp = head;
    while(temp!=NULL)
    {
        cout << temp->top << " ->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void pop(stack*&head)
{
    stack *temp = head;
    if(head==NULL)
    {
        return;
    }
    head = head->next;
    delete temp;
}
stack* Top(stack*&head)
{
    if(head==NULL)
    {
        return head;
    }
    cout<<head->top;
}
bool empty(stack*&head)
{
    if(head==NULL)
    {
        cout << "isempty:=";
        return 1;
    }
    else{
  cout << "is_NOTempty:=\t";
        return 0;
    } 
     
}
int main()
{

    stack *head = NULL;

    push(head, 1);
    push(head, 2);
    push(head, 3);
    push(head, 4);
    push(head, 5);
    display(head);
    pop(head);
    display(head);
    Top(head);
    cout << endl;
  cout<< empty(head);
    return 0;
}

/*#include <iostream>
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
class stack
{
public:
    node*top;
    stack()
    {
       top=
        top->next = NULL;
    }

    node *head = NULL;
node* push(int x)
    {
        node *n = new node(x);
        node *temp = head;
        if (top->next=NULL)
        {
            return top;
        }

        while(temp->next!=NULL)
        {

            temp = temp->next;
        }
        top = n;

    }

    void pop()
    {
        if (top == NULL)
        {
            cout << "Underflow" << endl;
            return;
        }
        top--;
    }

    node* Top()
    {
        return top;
    }
    bool isempty()
    {
        return top->next= NULL;
    }

    void display(node*head)
    {
        node *temp = head;
    }
};

int main()
{
    node *head = NULL;
    stack s;
    s.push(4);
    s.push(5);
    s.push(5);
    cout<<s.Top();

    return 0;
}
*/
