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
        string str;
        cin>>str;
        unordered_map<char,int> mp;
        for(int i=0;i<26;i++)
        {
            mp[s[i]]=i;
        }
        int curr=mp[str[0]],ans=0;
        for(int i=1;i<str.size();i++)
        {
            ans+=abs(curr-mp[str[i]]);
            curr=mp[str[i]];
        }
        cout<<ans<<endl;
    }
}