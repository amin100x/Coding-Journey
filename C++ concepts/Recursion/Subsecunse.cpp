#include<iostream>
#include<string>
using namespace std;

void subseq(string s , string out , int index)
{
    if (index == s.size())
    {
        cout<<out<<endl;
        return;
    }
// nahi lena
subseq(s , out, index+1);
//lena he
out.push_back(s[index]);
subseq(s , out, index+1);

}
int main()
{
    cout<<"enter the strng:- ";
    string str;
    cin>>str;

    cout<<"print all sub secuans:-";
    string output="";
    subseq(str, output, 0);
}