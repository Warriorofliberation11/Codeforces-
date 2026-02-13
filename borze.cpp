#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string str="";
    int i=0,n=s.size();
    while(i<n)
    {
        if(i+1<n && s[i]=='-')
        {
            if(s[i+1]=='.')
            str+='1';
            else
            str+='2';
            i+=2;
        }
        else
        {
            str+='0';
            i++;
        }
    }
    cout<<str;  
}