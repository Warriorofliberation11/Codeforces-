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
        vector<int> vis(n+2,0);
        bool k=true;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(i!=0)
            {
                if(vis[a-1]==0 && vis[a+1]==0)
                k=false;
            }
            vis[a]=1;
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}