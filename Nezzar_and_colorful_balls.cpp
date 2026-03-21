#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,maxi=0;
        cin>>n;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[a]++;
            maxi=max(maxi,mp[a]);
        }
        cout<<maxi<<endl;
    }
}