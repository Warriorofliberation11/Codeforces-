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
        vector<int> vis(n+1,0);
        cout<<1<<" ";
        vis[1]=1;
        int i=2;
        while(i<=n)
        {
            int j=i;
            while(j<=n)
            {
                if(vis[j]==0)
                {
                    cout<<j<<" ";
                    vis[j]=1;
                }
                j=j*2;
            }
            i++;
        }
        cout<<endl;
    }
}