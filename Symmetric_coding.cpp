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
        vector<char> g;
        set<char> st;
        for(int i=0;i<n;i++)
        {
            if(st.find(s[i])==st.end())
            {
                st.insert(s[i]);
                g.push_back(s[i]);
            }
        }
        sort(g.begin(),g.end());
        int m=g.size();
        unordered_map<char,char> mp;
        for(int i=0;i<=m/2;i++)
        {
            mp[g[i]]=g[m-i-1];
            mp[g[m-i-1]]=g[i];
        }
        for(int i=0;i<n;i++)
        {
            s[i]=mp[s[i]];
        }
        cout<<s<<endl;
    }
}