#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        mp[a]=i+1;
    }
    if(mp.size()>=k)
    {
        cout<<"YES"<<endl;
        int cnt=0;
        for(auto it:mp)
        {
            if(cnt==k)
            break;
            cout<<it.second<<" ";
            cnt++;
        }
        cout<<endl;
    }
    else
    cout<<"NO"<<endl;
}