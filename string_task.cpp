#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="",s;
    cin>>s;
    set<char> st={'a','e','i','o','u','A','E','I','O','U','Y','y'};
    for(char i:s)
    {
        if(st.find(i)==st.end())
        {
            str+='.';
            str+=tolower(i);
        }
    }
    cout<<str;
}