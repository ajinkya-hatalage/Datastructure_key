/*
------------(insertion sort)-----------
Key point :=
insert an element from unsorted array 
to its correct position in sorted array
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "ENTER THE SIZE OF ARRAY :=\n";
    cin >> n;
    int arr[n];
    cout << "ENTER THE n ELEMENTS IN THE ARRAY\n";
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n;i++)
    {
        int current = arr[i];
        int j = i - 1;
        while(arr[j]>current && j>=0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
     cout << "\nTHE SORTED ELEMESTS UING INSERTION SORT AS  FOLLOWS: =\n";
    for (int i = 0; i < n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}