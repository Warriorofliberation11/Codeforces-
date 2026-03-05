#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long xa,ya,xb,yb,xc,yc;
        cin>>xa>>ya>>xb>>yb>>xc>>yc;
        long long ans=abs(xa-xb)+abs(ya-yb);
        if((xc==xb && xa==xb && ((ya<yc && yc<yb) || (ya>yc && yc>yb))) ||(yb==yc && ya==yb &&  ((xa<xc && xc<xb) || (xa>xc && xc>xb))))
        ans+=2;
        cout<<ans<<endl;
    }
}