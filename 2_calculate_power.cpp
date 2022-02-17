/*
n raise to power p= n*n*n.....ptimes .
nP=n * np-1
*/
#include<bits\stdc++.h>
using namespace std;
int power(int n,int p)
{
    if(p==0)
    {
        return 1;
    }
    int prevpower = power(n, p - 1);
    return n * prevpower;
}
int main()
{
    int n, p;
    cout << "enter value of n and p" << endl;
    cin >> n >> p;
    cout<<power(n, p);

    return 0;
}
/*
output :
4 3
64
*/