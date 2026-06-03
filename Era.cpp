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
        long long k=1,ans=0;
        for(int i=0;i<n;i++)
        {
            long long a;
            cin>>a;
            ans+=max(0LL,a-k);
            k=max(k+1,a+1);
        }
        cout<<ans<<endl;
    }
}