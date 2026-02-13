#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string g="yes";
    while(t--)
    {
        string s;
        cin>>s;
        if(s.size()!=3)
        {
            cout<<"NO"<<endl;
        }
        if(g[0]==tolower(s[0]) && g[1]==tolower(s[1]) && g[2]==tolower(s[2]))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}