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
        unordered_map<int,int> mpb,mpe;
        vector<vector<int>> arr(n,vector<int>(n-1));
        int bfirst=-1,bsecond=-1,efirst=-1,esecond=-1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                cin>>arr[i][j];
                if(j==0)
                {
                    mpb[arr[i][j]]++;
                    if(mpb[arr[i][j]]==1)
                    {
                        if(bfirst==-1)
                        bfirst=i;
                        else
                        bsecond=i;
                    }
                }
                if(j==n-2)
                {
                    mpe[arr[i][j]]++;
                    if(mpe[arr[i][j]]==1)
                    {
                        if(efirst==-1)
                        efirst=i;
                        else
                        esecond=i;
                    }
                }
            }
        }
        int bfinal=(mpb[arr[bfirst][0]]==1)?bfirst:bsecond;
        int efinal=(mpe[arr[efirst][n-2]]==1)?efirst:esecond;
        for(int i=0;i<n-1;i++)
        {
            cout<<arr[efinal][i]<<" ";
        }
        cout<<arr[bfinal][n-2]<<endl;
    }
}