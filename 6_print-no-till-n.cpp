#include<bits\stdc++.h>
using namespace std;
void decreasingorder(int n)
{
    if(n==0)
    {
        return;
    }
    cout << n << " ";
    decreasingorder(n - 1); // called after printing values;
}

void increasingorder(int n)
{
    if(n==0)
    {
        return;
    }
    increasingorder(n - 1);//called before print 
    cout << n << " ";
}
int main()
{
    int n;
    cout << "Enter the number from hich you want the decreasing order :=\t" << endl;
    cin >> n;
    decreasingorder(n);
    cout << "\nIN Iecreasing order :=" << endl;
    increasingorder(n);
    return 0;
}
/*
output :
Enter the number from hich you want the decreasing order :=
20
20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 
IN Iecreasing order :=
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
*/