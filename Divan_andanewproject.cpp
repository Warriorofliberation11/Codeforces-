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
        int left=-1,right=1;
        long long res=0;
        vector<int> ans(n+1);
        ans[0]=0;
        priority_queue<pair<int,int>> pq;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            pq.push({a,i});
        }
        while(!pq.empty())
        {
            int a=pq.top().first,i=pq.top().second;
            pq.pop();
            if(abs(left)<right)
            {
                ans[i]=left;
                left--;
            }
            else
            {
                ans[i]=right;
                right++;
            }
            res+=2LL*a*abs(ans[i]);
        }
        cout<<res<<endl;
        for(int i=0;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}