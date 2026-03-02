#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,n;
        cin>>n>>k;
        vector<int> ans(n);
        for(int i=1;i<=n;i++)
        {
            ans[i-1]=i;
        }
        reverse(ans.begin()+k,ans.end());
        for(int i=0;i<n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}