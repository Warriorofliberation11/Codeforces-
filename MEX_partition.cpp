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
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[a]++;
        }
        int ans=0;
        while(mp[ans]!=0)
        ans++;
        cout<<ans<<endl;
    }
}