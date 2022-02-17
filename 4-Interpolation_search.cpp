#include<iostream>
#include<algorithm>
using namespace std;
//this metod is used to find within the range and also to improvr binary search
int inter_polation_search(int arr[],int data,int n)
{
    int low = 0, mid, high = n - 1;
    while(low<=high)
    {
        mid = low + (((data - arr[low]) * (high - low) / (arr[high] - arr[low])));
        if(data==arr[mid])
        {
            return mid + 1;
        }
        if(data<arr[mid])
        {
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[]={12,332,1,122,3212,23,423,32,23};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    sort(arr, arr + n);
    cout<<inter_polation_search(arr, 3212,n);
    return 0;
}