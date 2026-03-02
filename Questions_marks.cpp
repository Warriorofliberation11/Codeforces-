#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<int,int> mp;
        for(char i:s)
        {
            mp[i]++;
        }
        for(auto it: mp)
        {
            if(it.first=='?')
            continue;
            if(it.second>n)
            ans+=n;
            else
            ans+=it.second;
        }
        cout<<ans<<endl;
    }
}