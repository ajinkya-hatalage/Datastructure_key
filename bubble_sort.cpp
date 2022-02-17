/*
------------(bubble  sort)-------------
Key Point :
Reapetedly swap two adjacent elements if they are in wrong order
*/
#include <iostream>
using namespace std;

int main()
{
    //taking array as input process
    int n;
    cout << "ENTER THE SIZE OF ARRAY :=\n";
    cin >> n;
    int arr[n];
    cout << "ENTER THE n ELEMENTS IN THE ARRAY\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int counter = 1; //variable for iteration
    while (counter < n - 1)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
            cout << arr[i];
        }
        counter++;
        cout << endl;
    }
    cout << "\nTHE SORTED ELEMESTS UING BUBBLE SORT AS  FOLLOWS: =\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}