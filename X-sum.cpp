#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        long long maxi=0;
        cin>>n>>m;
        vector<vector<int>> arr(n,vector<int>(m)),prev(n,vector<int>(m)),ahead(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int newi=i-1,newj=j-1;
                long long sum=arr[i][j];
                while(newi>=0 && newj>=0)
                {
                    sum+=arr[newi][newj];
                    newi--;
                    newj--;
                }
                newi=i-1,newj=j+1;
                while(newi>=0 && newj<m)
                {
                    sum+=arr[newi][newj];
                    newi--;
                    newj++;
                }
                newi=i+1,newj=j-1;
                while(newi<n && newj>=0)
                {
                    sum+=arr[newi][newj];
                    newi++;
                    newj--;
                }
                newi=i+1,newj=j+1;
                while(newi<n && newj<m)
                {
                    sum+=arr[newi][newj];
                    newi++;
                    newj++;
                }
                maxi=max(sum,maxi);
            }
        }
        cout<<maxi<<endl;
    }
}