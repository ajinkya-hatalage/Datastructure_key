/*
   replace pi with 3.14 
   ip = "pippxxppiixipi"
   op = "3.14ppxxp3.14ixi3.14"
*/
#include<bits\stdc++.h>
using namespace std;
void replace_pi(string s)
{
    if(s.length()==0)
    {
        //base condition :
        return;
    }
    if(s[0]=='p' && s[1]=='i')
    {
        cout << "3.14";
        replace_pi(s.substr(2));
    }
    else 
    {
        cout << s[0];
        replace_pi(s.substr(1));
    }

}

int main()
{
    cout << "Input string is : =   pippxxppiixipi  " << endl;
    cout << "after replace of pi by 3.14 :=   ";
    replace_pi("pippxxppiixipi");
    return 0;
}

/*
Output :
Input string is : =   pippxxppiixipi  
after replace of pi by 3.14 :=   3.14ppxxp3.14ixi3.14
*/