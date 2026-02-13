#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    if(s.size()!=t.size())
    cout<<"NO";
    else
    {
        reverse(s.begin(),s.end());
        if(s==t)
        cout<<"YES";
        else
        cout<<"NO";
    }
}