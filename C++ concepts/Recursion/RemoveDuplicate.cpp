#include<iostream>
using namespace std;

string RemoveDup(string s)
{
    if (s.length()== 0)
    {
        return "";
    }
    char ch=s[0];
    string ans= RemoveDup(s.substr(1));
    if (ch== ans[0])
    {
       return ans;
    }
    return (ch+ans);
}
int main()
{
    cout<<RemoveDup("aaxbbbbbdaa");
}

//kuch to gadbad he