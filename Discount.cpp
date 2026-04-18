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
        vector<long long> a(n),b(k),vis(n,0);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<k;i++)
        {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=n-1,j=0;
        while(j<k && i>=0)
        {
            if(b[j]>i+1)
            break;
            i-=(b[j]-1);
            vis[i]=1;
            i--;
            j++;
        }
        long long sum=0;
        for(i=0;i<n;i++)
        {
            if(vis[i]==0)
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
}