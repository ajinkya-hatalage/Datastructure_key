#include<iostream>
#include<algorithm>
using namespace std;
int ordered_Linear_search(int arr[],int n,int key)
{
    for (int i = 0; i < n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
        else if( arr[i]>key)
        {
            return -1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = { 31, 2, 212, 11, 232, 12, 231, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+n);
    for (int i = 0; i < n;i++)
    {
        cout << arr[i] << " ";
        //sorted array
    }
    cout << endl;
    cout<< ordered_Linear_search(arr, n, 433);


    return 0;
}
//this imrove  complexityof before search:
// as it require less search if key is greater than data
//tc : O(n)