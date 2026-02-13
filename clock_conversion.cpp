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
        int a=0;
        for(int i=0;i<2;i++)
        {
            a=(a*10)+(s[i]-'0');
        }
        if(a==12)
        cout<<s<<" PM"<<endl;
        else if(a>12)
        {
            a-=12;
            s[0]=(a<10)?'0':'1';
            s[1]='0'+(a%10);
            cout<<s<<" PM"<<endl;
        }
        else if(a==0)
        {
            s[0]='1';
            s[1]='2';
            cout<<s<<" AM"<<endl;
        }
        else
        cout<<s<<" AM"<<endl;
    }
}