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
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[a]++;
            if(mp[a]>=3)
            ans=a;
        }
        cout<<ans<<endl;
    }
}