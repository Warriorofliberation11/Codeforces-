#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        vector<int> a(n),b(n);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            pq.push({b[i],a[i]});
        }
        pq.push({p,n+1});
        int total=1;
        long long cost=p;
        while(total<n)
        {
            int left=n-total,value=pq.top().first,number=pq.top().second;
            if(number<=left)
            {
                total+=number;
                cost+=value*1LL*number;
            }
            else
            {
                total=n;
                cost+=left*1LL*value;
            }
            pq.pop();
        }
        cout<<cost<<endl;
    }
}