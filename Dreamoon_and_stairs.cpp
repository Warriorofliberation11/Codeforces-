#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(n<m)
    cout<<-1;
    else if(n==m)
    cout<<m;
    else
    {
        int i=1,ans=INT_MAX;
        while(i*2<=n)
        {
            if((n-i)%m==0)
            ans=min(ans,n-i);
            i++;
        }
        cout<<ans;
    }
}