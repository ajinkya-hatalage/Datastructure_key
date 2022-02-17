#include <bits\stdc++.h>
using namespace std;
void duplicate_no(int arr[], int size)
{
    int ans = 0;
    // Xor ing all array elemnts:
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    // XOR ing {1 ,n-1}
    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }
    cout << ans;
}
int main()
{
    int arr[] = {1, 2, 3, 3, 4, 5}; // 3 is duplicate
    duplicate_no(arr, 6);

    return 0;
}