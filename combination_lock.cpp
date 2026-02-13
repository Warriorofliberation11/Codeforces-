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
        if(n%2==0)
        cout<<-1<<endl;
        else
        {
            vector<int> vis(n,0);
            int i=0;
            while(vis[i]==0)
            {
                cout<<i+1<<" ";
                vis[i]=1;
                i=(i+2)%n;
            }
            cout<<endl;
        }
    }
}