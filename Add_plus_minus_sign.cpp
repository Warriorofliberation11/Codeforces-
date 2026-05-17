#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool k=false;
        if(s[0]=='1')
        k=true;
        string str;
        for(int i=1;i<n;i++)
        {
            if(s[i]=='0')
            str+='+';
            else
            {
                if(k)
                str+='-';
                else 
                str+='+';
                k=!k;
            }
        }
        cout<<str<<endl;
    }
}