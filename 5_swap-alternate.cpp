/*
---(swap alternate)---
i/p :=  1,2,7,8,5
o/p :=  2,1,8,7,5 

i/p :=  1,2,3,4,5,6
o/p :=  2,1,4,3,6,5

*/
#include<iostream>
using namespace std;

void swap_alternate(int arr[],int n)
{
    for (int i = 0; i < n;i+=2)
    {
        if(i+1<n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
void display(int arr[],int n){
    for (int i = 0; i < n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 2, 7, 8, 5};
    int brr[] = {1,2,3,4,5,6};
    display(arr, 5);
    display(brr, 6);
    cout << "Array after alternate swap as below\n";
    swap_alternate(arr, 5);
    swap_alternate(brr, 6);
    display(arr, 5);
    display(brr, 6);
    return 0;
}