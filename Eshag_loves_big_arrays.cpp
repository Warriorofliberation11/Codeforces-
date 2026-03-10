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
        int mini=INT_MAX;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mini=min(mini,a);
            mp[a]++;
        }
        cout<<n-mp[mini]<<endl;
    }
}