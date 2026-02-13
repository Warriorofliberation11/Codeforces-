#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool k=false;
    for(int i=0;i<5;i++)
    {
        string str;
        cin>>str;
        if(str[0]==s[0] || str[1]==s[1])
        k=true;
    }
    if(k)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}