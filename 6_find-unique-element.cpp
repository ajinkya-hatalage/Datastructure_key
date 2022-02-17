/*
finding unique element in array :


new concept : XOR  a^a=0 ; 0^a=a
*/
#include<bits\stdc++.h>
using namespace std;
int find_unique_element(int *arr,int size)
{
    int ans = 0;
    for (int i = 0; i < size;i++)
    {
        ans = ans ^ arr[i];
    }
  cout<<ans;
}
int main()
{
   int arr[]={ 2,3,1,6,3,6,2};
    // elements n=2m+1 ; that we have to find unique element
    find_unique_element(arr, 7);
    return 0;
}