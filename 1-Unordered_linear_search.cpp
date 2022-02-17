#include<bits\stdc++.h>
using namespace std;
// used for unsorted data
int unordered_linear_search(int arr[],int n,int key)
{
    for (int i = 0; i < n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = { 31, 2, 212, 11, 232, 12, 231, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<unordered_linear_search(arr, n, 12);
    return 0;
}
/*
TC :
O(n)
space c:
O(1)
*/