/*
finding factorial :
n!=n * n-1 * n-2 * ......*1
n!=n *(n-1)!
0!=1
*/
#include<bits\stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
   // int prevfactorial = factorial(n - 1);
   // return n * prevfactorial;
    return n * factorial(n - 1);
}
int main()
{

    int n;
    cout << "Enter the value upto which you want factorial :\t";
    cin >> n;
    cout << factorial(n);
    return 0;
}
/*
output :

Enter the value upto which you want factorial : 6
720
*/