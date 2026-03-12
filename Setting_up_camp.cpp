#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int need=3-b%3;
        if(need!=3 && c<need)
        cout<<-1<<endl;
        else
        {
            int ans=0;
            if(need!=3)
            {
                c-=need;
                ans++;
            }
            ans+=a+b/3+(c+2)/3;
            cout<<ans<<endl;
        }
    }
}