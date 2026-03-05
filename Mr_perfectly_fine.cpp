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
        unordered_map<string,int> mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            string s;
            cin>>s;
            if(mp.count(s))
            mp[s]=min(mp[s],a);
            else
            mp[s]=a;
        }
        int ans=INT_MAX;
        if(mp.count("11"))
        ans=mp["11"];
        if(mp.count("10") && mp.count("01"))
        ans=min(ans,mp["10"]+mp["01"]);
        if(ans==INT_MAX)
        cout<<-1<<endl;
        else
        cout<<ans<<endl;
    }
}