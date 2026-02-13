#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> g(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || j==0)
            g[i][j]=1;
            else 
            g[i][j]=g[i-1][j]+g[i][j-1];
        }
    }
    cout<<g[n-1][n-1];
}