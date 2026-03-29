#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(i%2==1)
            {
                if(s[i]!='z')
                s[i]='z';
                else
                s[i]='y';
            }
            else
            {
                if(s[i]!='a')
                s[i]='a';
                else
                s[i]='b';
            }
        }
        cout<<s<<endl;
    }
}