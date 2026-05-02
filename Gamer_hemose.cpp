#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,H;
        cin>>n>>H;
        priority_queue<long long> pq;
        for(int i=0;i<n;i++)
        {
            long long a;
            cin>>a;
            pq.push(a);
        }
        long long a=pq.top(),cnt=0;
        pq.pop();
        long long b=pq.top();
        long long sum=a+b;
        long long ans=(H/sum)*2;
        H=H%sum;
        if(H>0)
        {
            H-=a;
            ans++;
        }
        if(H>0)
        {
            H-=b;
            ans++;
        }
        cout<<ans<<endl;
    }
}