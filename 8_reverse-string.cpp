/*
Reverse a string using recursion :
ex : " binod "
op : " donib " 
*/
#include<bits\stdc++.h>
using namespace std;
void reverse_string(string s)
{
    if(s.length()==0)
    {
        //base case
        return;
    }

    string ros = s.substr(1); //rest of the string=ros
    reverse_string(ros);
    cout << s[0];
}
int main()
{
    cout << "INPUT STRING IS :=  BINOD"<<endl;
    cout << "strng afte reverse :=  ";
    reverse_string("BINOD");
    

    return 0;
}
/*
Output :
INPUT STRING IS :=  BINOD   
strng afte reverse :=  DONIB
*/