#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,cnt=0,mini=INT_MAX,res=0;
        cin>>n>>m;
        vector<vector<int>> arr(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
                mini=min(mini,abs(arr[i][j]));
                res+=abs(arr[i][j]);
                if(arr[i][j]<0)
                cnt++;
            }
        }
        if(cnt%2==1)
        res-=(2*mini);
        cout<<res<<endl;
    }
}