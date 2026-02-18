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
        vector<vector<string>> arr(3,vector<string>(n));
        unordered_map<string,int> mp;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>arr[i][j];
                mp[arr[i][j]]++;
            }
        }
        for(int i=0;i<3;i++)
        {
            int sum=0;
            for(int j=0;j<n;j++)
            {
                if(mp[arr[i][j]]==1)
                sum+=3;
                else if(mp[arr[i][j]]==2)
                sum++;
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}