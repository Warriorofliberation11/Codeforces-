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
        char prev='0';
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='?')
            {
                if(prev=='0')
                s[i]='0';
                else
                s[i]='1';
            }
            else
            prev=s[i];
        }
        cout<<s<<endl;
    }
}