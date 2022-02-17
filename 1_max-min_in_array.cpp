#include<iostream>
#include<climits>

using namespace std;

void getmaxNo(int arr[],int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi = arr[i];
        }
    }
    cout << maxi<<endl;
}

void getminNo(int arr[],int n)
{
    int mini = INT_MAX;
    for (int i = 0; i < n;i++)
    {
        if(arr[i]<mini)
        {
            mini = arr[i];
        }
    }
    cout << mini<<endl;
}


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }

    getmaxNo(arr, n);
    getminNo(arr, n);
}