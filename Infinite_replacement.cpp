#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,str;
        cin>>s>>str;
        bool active=false;
        for(char i: str)
        {
            if(i=='a')
            active=true;
        }
        if(active)
        {
            if(str.size()!=1)
            cout<<-1<<endl;
            else 
            cout<<1<<endl;
        }
        else
        cout<<(long long)pow(2,s.size())<<endl;
    }
}