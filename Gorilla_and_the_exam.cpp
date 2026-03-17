#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[a]++;
        }
        if(k>=n-1)
        {
            cout<<1<<endl;
            continue;
        }
        int total=0,ans=0;
        vector<int> g;
        for(auto it:mp)
        {
            g.push_back(it.second);
        }
        sort(g.begin(),g.end());
        for(auto it: g)
        {
            if(total+it<=k)
            total+=it;
            else
            ans++;
        }
        cout<<ans<<endl;
    }
}