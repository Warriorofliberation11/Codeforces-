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
        int total=0,ans=0,cnt=0;
        bool add=true;
        for(auto it:mp)
        {
            if(total+it.second<=k)
            total+=it.second;
            else
            ans++;
        }
        cout<<ans<<endl;
    }
}