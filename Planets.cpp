#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n>>c;
        long long cnt=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[a]++;
        }   
        for(auto it: mp)
        {
            if(it.second<=c)
            cnt+=it.second;
            else
            cnt+=c;
        }
        cout<<cnt<<endl;
    }
}