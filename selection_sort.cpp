/*
--------------(selection_sort)------------
Key point :=
find the minimum element in unsorted array and swap it with element
at beginning .
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

    for (int i = 0; i < n - 1;i++)
    {
        for (int j = i + 1; j < n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "\nTHE SORTED ELEMESTS UING SELCTION SORT AS  FOLLOWS: =\n";
    for (int i = 0; i < n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

