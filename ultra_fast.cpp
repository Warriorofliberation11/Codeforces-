#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,str="";
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)
    {
        str+=((s1[i]-'0')^(s2[i]-'0')==1)?'1':'0';
    }
    cout<<str;
}