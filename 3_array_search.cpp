//linearserch in array :
// another approach as  we also se in searching folder in other way
#include<bits\stdc++.h>
using namespace std;

bool search(int arr[],int size,int key)
{
    for (int i = 0; i < size;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[] = {42, 12, 42, -3, -1, 23, 243, 23};
    //whether the  243 is present or not
    cout << "Enter the KEY";
    int key;
    cin >> key;
   bool found= search(arr, 10, key);
   if(found)
   {
       cout << "key is present" << endl;

   }
   else{
       cout << "key is absent" << endl;
   }

    return 0;
}