/*
fibonacci series : 0,1,1,2,3,5,8,13

fib(n)=fib(n-1)+fib(n-2)
*/
#include<iostream>
using namespace std;
int fibonacci(int n)
{
    if(n==0 || n==1)
    {
        return n;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
}