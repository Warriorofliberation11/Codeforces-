#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long sum=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[i%k]=max(mp[i%k],a);
        }
        for(auto i: mp)
        {
            sum+=i.second;
        }
        cout<<sum<<endl;
    }
}