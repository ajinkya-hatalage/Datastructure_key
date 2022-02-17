/*
generate all substrings of a string :
ip ="ABC"
op ="" "A" "B" "AB" "C" "AC" "BC" "ABC"
*/
#include<bits\stdc++.h>
using namespace std;
void subsequence(string s,string ans)
{
    if(s.length()==0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    subsequence(ros, ans);
    subsequence(ros, ans + ch);
}
int main()
{
    subsequence("ABC", "");
    return 0;
}
/*
output :
C 
B 
BC
A 
AC
AB
ABC
*/