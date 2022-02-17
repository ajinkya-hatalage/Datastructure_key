/* ---------(Stack)---------
1] It is a linear data structure
2] items can be addedto or removed 
   from the list only at one end.
3] LIFO (Last In First Out) mechanism;
 ex: lift , pile of coins , tennis ball packet;
--operation--
i)  push(x) := to insert element in stack
ii)  pop()  := topmost element removed 
iii) top()  := return topmost element
iv) empty()  := return stack is empty or not 
*/
// Stack using array :
#include <iostream>
using namespace std;
#define n 100
class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "stack is full or stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "NO elemt To pop" << endl;
            return;
        }
        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "NO element in stack" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return top == -1;
    }
};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.empty();

    return 0;
}