/*
find the first and last occurance of a numer in an array :
ex : int arr[]={ 4,2,1,2,5,2,7}
first occurance of 2 : at arr[1];
last occurance of 2  : at arr[5];
*/
#include<bits\stdc++.h>
using namespace std;
int first_occurance(int arr[],int n,int pos,int key)
{
    if(pos==n)
    {
       // base cndition
        return -1;
    }
    if(arr[pos]==key)
    {
        return pos;
    }
    return first_occurance(arr, n, pos + 1, key);
}

int last_occurance(int arr[],int n,int pos,int key)
{
     if(pos==n)
    {
        //base condition
        return -1;
    }
    int restarray = last_occurance(arr, n, pos + 1, key);
    if(restarray!=-1)
    {
        return restarray;
    }
    if(arr[pos]==key)
    {
        return pos;
    }
    return -1;
}
int main()
{
    int arr[] = {4, 2, 1, 2, 5, 2, 7};
    cout <<"1st occurance of 2 is at :=\t" <<first_occurance(arr, 7, 0, 2)<<endl;
    cout << "last occurance of 2 is at :=\t " <<last_occurance(arr,7,0,2);

    return 0;
}
/*
Output :=

1st occurance of 2 is at :=     1 
last occurance of 2 is at :=    5

*/