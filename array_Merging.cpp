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
        vector<int> a(n),b(n);
        set<int> st;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            st.insert(a[i]);
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            st.insert(b[i]);
        }
        int ans=1;
        unordered_map<int,int> mp1,mp2;
        mp1[a[0]]=1;
        int cnt=1;
        for(int i=1;i<n;i++)
        {
            if(a[i]==a[i-1])
            cnt++;
            else
            cnt=1;
            mp1[a[i]]=max(mp1[a[i]],cnt);
        }
        mp2[b[0]]=1;
        cnt=1;
        for(int i=1;i<n;i++)
        {
            if(b[i]==b[i-1])
            cnt++;
            else
            cnt=1;
            mp2[b[i]]=max(mp2[b[i]],cnt);
        }
        for(auto i: st)
        {
            ans=max(ans,mp1[i]+mp2[i]);
        }
        cout<<ans<<endl;
    }
}