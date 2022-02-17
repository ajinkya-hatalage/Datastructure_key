#include <iostream>
#include <algorithm>
using namespace std;
int binary_search(int arr[], int n, int key)
{
    int start = 0;
    int end = n-1 ;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {31, 2, 212, 11, 232, 12, 231, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout <<"Size:="<< n << endl;
    // the base condition for binary search is the array must sorted
    sort(arr, arr + n);
    cout << "Sorted array base condition:=\n";
    for (int i = 0; i < n; i++)
    {
        cout <<arr[i] << " ";
    }
    cout << endl;
    cout << binary_search(arr, n, 232);

    return 0;
}
/*
TC:
  O(n)
SC:
  O(1)
*/