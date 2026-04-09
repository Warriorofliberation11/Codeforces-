#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[a]++;
        }
        for(auto it:mp)
        {
            if(it.second>2)
            cnt+=it.second/3;
        }
        cout<<cnt<<endl;
    }
}