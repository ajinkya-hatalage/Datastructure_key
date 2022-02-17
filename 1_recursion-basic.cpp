/*
 Recursion :=  when a function call itself 
               to make the problems smaller called as recursion .
    ( base condition to stop the recursiv call it is VIMP that base condition)
ex :
1) Add all numbers till n
 sum till n=n+n-1+n-2+n-3+.......+1
 sum till n=sum till n-1;
 sum till n-1 = n-1 + sum till n-2;
 .
 .
 .
 sum till 0=0;
*/

#include <bits\stdc++.h>
using namespace std;
int sum(int n)
{
    if (n == 0)
    {
        // basecondition to stop the recursive call
        return 0;
    }
    int prevsum = sum(n - 1);
    return n + prevsum;
}
int main()
{
    int n;
    cout << "Enter the no upto which you want sum :=\t" << endl;
    cin >> n;

    cout << "Sum of n number is := \t" << sum(n);
    return 0;
}
/*
 output :
Enter the no upto which you want sum :=
10
Sum of n number is :=   55


*/