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
        int amin=INT_MAX,bmin=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            amin=min(amin,a[i]);
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            bmin=min(bmin,b[i]);
        }
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=max(a[i]-amin,b[i]-bmin);
        }
        cout<<ans<<endl;
    }
}