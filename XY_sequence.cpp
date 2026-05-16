#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b,x,y,a=0;
        cin>>n>>b>>x>>y;
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            if(a+x>b)
            a-=y;
            else
            a+=x;
            ans+=a;
        }
        cout<<ans<<endl;
    }
}