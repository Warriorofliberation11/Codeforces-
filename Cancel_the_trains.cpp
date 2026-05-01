#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,cnt=0;
        cin>>n>>m;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[a]++;
        }
        for(int i=0;i<m;i++)
        {
            int a;
            cin>>a;
            mp[a]++;
            if(mp[a]==2)
            cnt++;
        }
        cout<<cnt<<endl;
    }
}