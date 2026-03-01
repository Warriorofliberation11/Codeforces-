#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,str="";
        cin>>s;
        bool check=true;
        str+=s[0];
        if(s.size()==1)
        {
            if(s[0]=='y')
            str+='z';
            else
            str+='y';
        }
        else
        { 
            for(int i=1;i<s.size();i++)
            {
                if(check && s[i]==s[i-1])
                {
                    if(s[i]=='z')
                    str+='y';
                    else
                    str+='z';
                    check=false;
                }
                str+=s[i];
            }
            if(check)
            {
                if(str.back()!='z')
                str+='z';
                else
                str+='y';
            }
        }
        cout<<str<<endl;
    }
}