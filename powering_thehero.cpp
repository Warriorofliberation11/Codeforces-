#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        priority_queue<int> pq;
        int n;
        cin>>n;
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a>0)
            pq.push(a);
            else
            {
                if(!pq.empty())
                {
                    ans+=pq.top();
                    pq.pop();
                }
            }
        }
        cout<<ans<<endl;
    }
}