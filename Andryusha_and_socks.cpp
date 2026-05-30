#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_map<int,int> mp;
    int cnt=0,ans=0;
    for(int i=0;i<2*n;i++)
    {
        int a;
        cin>>a;
        mp[a]++;
        if(mp[a]==1)
        cnt++;
        else
        cnt--;
        ans=max(ans,cnt);
    }
    cout<<ans<<endl;
}