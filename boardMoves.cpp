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
        long long ans=0,start=8,cnt=1;
        for(int i=3;i<=n;i+=2)
        {
            ans+=(start*cnt);
            cnt++;
            start+=8;
        }
        cout<<ans<<endl;
    }
}