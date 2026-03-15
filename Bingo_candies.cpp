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
        vector<vector<int>> arr(n,vector<int>(n));
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
                mp[arr[i][j]]++;
            }
        }
        bool k=true;
        for(auto it: mp)
        {
            if(it.second>(n*(n-1)))
            {
                k=false;
                break;
            }
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}