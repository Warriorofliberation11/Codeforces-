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
        unordered_map<int,int> mp;
        for(int i=0;i<k;i++)
        {
            int b,c;
            cin>>b>>c;
            mp[b]+=c;
        }
        priority_queue<int> pq;
        for(auto it: mp)
        {
            pq.push(it.second);
        }
        int ans=0;
        while(!pq.empty() && n>0)
        {
            n--;
            ans+=pq.top();
            pq.pop();
        }
        cout<<ans<<endl;
    }
}