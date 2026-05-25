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
        priority_queue<int> pq;
        int prev;
        cin>>prev;
        for(int i=1;i<n;i++)
        {
            int a;
            cin>>a;
            pq.push(abs(a-prev));
            prev=a;
        }
        k--;
        while(k--)
        {
            pq.pop();
        }
        int sum=0;
        while(!pq.empty())
        {
            sum+=pq.top();
            pq.pop();
        }
        cout<<sum<<endl;
    }
}