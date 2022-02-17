#include<bits\stdc++.h>
using namespace std;
void towerofhanoi(int n,char src ,char dest ,char helper)
{
    if(n==0)
    {
        return;
    }
    towerofhanoi(n - 1, src, helper, dest);
    cout << "Move from " << src << "to " << dest << endl;
    towerofhanoi(n - 1, helper, dest, src);
}
int main()
{
    towerofhanoi(3, 'A', 'C', 'B');

    return 0;
}
/*
Output :
Move from Ato C
Move from Ato B
Move from Cto B
Move from Ato C
Move from Bto A
Move from Bto C
Move from Ato C
*/