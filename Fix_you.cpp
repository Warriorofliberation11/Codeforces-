#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,ans=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            string str;
            cin>>str;
            if(i!=n-1)
            {
                if(str[m-1]=='R')
                ans++;
            }
            else
            {
                for(int i=0;i<m-1;i++)
                {
                    if(str[i]=='D')
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}