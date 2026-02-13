#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>n>>m;
    map<string,string> mp;
    while(m--)
    {
        string a,b;
        cin>>a>>b;
        if(a.size()<=b.size())
        mp[b]=a;
        else
        mp[a]=b;
    }
    while(n--)
    {
        string r;
        cin>>r;
        if(mp.count(r))
        cout<<mp[r]<<" ";
        else
        cout<<r<<" ";
    }
}