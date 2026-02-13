#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,q;
        long long cnt=0,ans=0;
        cin>>n>>k>>q;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a>q)
            {
                if(cnt>=k)
                {
                    ans+=((cnt-k+1)*(cnt-k+2))/2;
                }
                cnt=0;
            }
            else
            cnt++;
        }
        if(cnt>=k)
        ans+=((cnt-k+1)*(cnt-k+2))/2;
        cout<<ans<<endl;
    }
}