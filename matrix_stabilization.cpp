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
        vector<vector<int>> arr(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        vector<int> dir={-1,0,1,0,-1};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int maxi=0;
                for(int k=1;k<5;k++)
                {
                    int newi=i+dir[k-1],newj=j+dir[k];
                    if(newi>=0 && newi<n && newj>=0 && newj<m)
                    maxi=max(maxi,arr[newi][newj]);
                }
                if(maxi<arr[i][j])
                arr[i][j]=maxi;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}