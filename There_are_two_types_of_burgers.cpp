#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b,f,p;
        cin>>b>>p>>f;
        b=b/2;
        int h,c;
        cin>>h>>c;
        int ans=0;
        if(h>=c)
        {
            ans+=h*min(b,p);
            b-=min(b,p);
            ans+=c*min(b,f);
        }
        else
        {
            ans+=c*min(b,f);
            b-=min(b,f);
            ans+=h*min(b,p);
        }
        cout<<ans<<endl;
    }
}