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
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[a]++;
        }
        for(auto it: mp)
        {
            ans.push_back(it.first);
        }
        sort(ans.begin(),ans.end());
        for(auto it: mp)
        {
            if(it.second>1)
            for(int i=1;i<it.second;i++)
            {
                ans.push_back(it.first);
            }
        }
        for(int i: ans)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}