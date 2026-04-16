#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,a,b;
        cin>>n>>a>>b;
        long long ans=0;
        if(b>a)
        {
            long long k=min(b-a,n);
            ans+=k*b-(k*(k-1))/2;
            n-=k;
        }
        ans+=n*a;
        cout<<ans<<endl;
    }
}