#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> arr(m+2,0);
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin>>l>>r;
        arr[l]++;
        arr[r+1]--;
    }
    int cnt=0;
    vector<int> ans;
    for(int i=1;i<=m;i++)
    {
        cnt+=arr[i];
        if(cnt==0)
        ans.push_back(i);
    }
    if(ans.empty())
    cout<<0<<endl;
    else
    {
        cout<<ans.size()<<endl;
        for(int i: ans)
        cout<<i<<" ";
        cout<<endl;
    }
}