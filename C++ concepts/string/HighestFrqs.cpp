//find which charecter has highest frequncy

#include<algorithm>
#include<string>
#include<iostream>
using namespace std;

int main()
{
    string s="fhbfdgrgfgvrgdgffff";
    int frq[26];

    for (int i = 0; i < 26; i++)  //for initialize all 26 charecter to 0
    {
        frq[i]=0;
    }
    for (int i = 0; i < s.size(); i++) // s[i]-'a' thi character ni jagya madi jay jethi ene++ karisakie
    {
        frq[s[i]- 'a']++ ;
    }
    
    char ans= 'a';
    int maxF=0;

    for (int i = 0; i < 26; i++)
    {
        if (frq[i]> maxF)  /* badha 26 charecter nu frq and maxF compare kari leva thi jene sauthi moti frq ave e and e charecter print kari devanu */
        {
            maxF= frq[i];
            ans= i+ 'a';
        }
        
    }
    
    cout<< maxF <<" "<< ans<<endl;
}