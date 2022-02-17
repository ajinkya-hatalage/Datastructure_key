/*
Input :
1 2 3 4 5 6
Output:
6 5 4 3 2 1
*/
#include <bits\stdc++.h>
using namespace std;
void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    // just we are  doing swaping
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void reverserecursive(int arr[],int start,int end)
{
    if(start<=end){
        return;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
  
    reverserecursive(arr, start+1,end-1);
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int brr[] = {2, 6, 9, 3, 4};
    reverse(arr, 6);
    reverse(brr, 5);
    printarray(arr, 6);
    printarray(brr, 5);
    cout << "using recursive function as follows \n";

reverserecursive(arr, 0,6);
    reverserecursive(brr,0, 5);
    printarray(arr, 6);
    printarray(brr, 5);
    return 0;
}