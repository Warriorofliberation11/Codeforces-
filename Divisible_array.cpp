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
        vector<int> ans(n+1);
        for(int i=1;i<=n;i++)
        ans[i]=i;
        if(n%2==0)
        {
            for(int i=1;i<=n;i++)
            ans[i]*=2;
        }
        for(int i=1;i<=n;i++)
        cout<<ans[i]<<" ";
        cout<<endl;
    }
}