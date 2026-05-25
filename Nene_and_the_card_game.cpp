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
        unordered_map<int,int> mp;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[a]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(mp[i]==0)
            cnt+=1;
        }
        cout<<cnt<<endl;
    }
}