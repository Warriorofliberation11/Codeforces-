#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string real="abc";
    while(t--)
    {
        string s;
        cin>>s;
        if(s==real)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int ans=0;
        if(s[0]!=real[0])
        ans++;
        if(s[1]!=real[1])
        ans++;
        if(s[2]!=real[2])
        ans++;
        if(ans!=3)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}