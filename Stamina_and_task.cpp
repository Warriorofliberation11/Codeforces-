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
        vector<double> c(n+2), d(n+2);
        for(int i=1;i<=n;i++)
        {
            int ci,pi;
            cin>>ci>>pi;
            c[i]=ci;
            d[i]=1.0 - pi/100.0;
        }
        vector<double> dp(n+2,0);
        for(int i=n;i>=1;i--)
        {
            dp[i]=max(dp[i+1], c[i] + d[i]*dp[i+1]);
        }
        cout<<dp[1]<<"\n";
    }
}