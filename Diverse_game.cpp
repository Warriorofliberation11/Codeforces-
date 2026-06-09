#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> mat(n,vector<int>(m)),ans(n,vector<int>(m,-1));
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>mat[i][j];
                arr.push_back(mat[i][j]);
            }
        }
        reverse(arr.begin(),arr.end());
        bool check=true;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                for(int k=0;k<arr.size();k++)
                {
                    if(arr[k]!=mat[i][j])
                    {
                        ans[i][j]=arr[k];
                        arr.erase(arr.begin()+k);
                        break;
                    }
                }
                if(ans[i][j]==-1)
                {
                    check=false;
                    break;
                }
            }
            if(!check)
            break;
        }
        if(!check)
        cout<<-1<<endl;
        else
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    cout<<ans[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
}