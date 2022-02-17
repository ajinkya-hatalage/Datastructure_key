#include<bits\stdc++.h>
using namespace std;
// int this we are taking address of first index of array
// its update in actual array :
void update(int arr[],int n)
{
    arr[0] = 120;
    cout << "Inside the function"<<endl;
     for (int i = 0; i < 3;i++)
    {
        cout << arr[i]<<" ";
    }

    cout << "\ngoing back to main function" << endl;
}
// To find sum of all elemts of array
int sum(int arr[],int n){
    int ans = 0;
    for (int i = 0; i < n;i++)
    {
        ans += arr[i];
    }
    return ans;
}
int main()
{
    int arr[3] = {1, 2, 3};
    update(arr, 3);
    for (int i = 0; i < 3;i++)
    {
        cout << arr[i]<<" ";
    }
    cout << "\nSum of all elements of array is" << sum(arr, 3);
    return 0;
}