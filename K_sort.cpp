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
        vector<int> g;
        int prev;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(i!=0 && a<prev)
            g.push_back(prev-a);
            else
            prev=a;
        }
        sort(g.begin(),g.end());
        int m=g.size(),last=0;
        long long ans=0;
        for(int i=0;i<m;i++)
        {
            if(g[i]-last>0)
            {
                ans+=(long long)(m-i+1)*(g[i]-last);
                last=g[i];
            }
        }
        cout<<ans<<endl;
    }
}