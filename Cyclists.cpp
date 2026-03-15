#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int n,k,p,m;
        cin>>n>>k>>p>>m;

        vector<int>a(n+1);
        for(int i=1;i<=n;i++)
            cin>>a[i];

        if(k==n)
        {
            cout<<m/a[p]<<"\n";
            continue;
        }

        int mn=INT_MAX;
        for(int i=1;i<=n;i++)
            if(i!=p)
                mn=min(mn,a[i]);

        int ans=0;

        if(p>k)
        {
            int cost=(p-k)*mn;
            if(m<cost)
            {
                cout<<0<<"\n";
                continue;
            }
            m-=cost;
        }

        if(m>=a[p])
        {
            m-=a[p];
            ans++;
        }
        else
        {
            cout<<0<<"\n";
            continue;
        }

        int cycle=a[p]+(n-k)*mn;

        ans+=m/cycle;

        cout<<ans<<"\n";
    }
}