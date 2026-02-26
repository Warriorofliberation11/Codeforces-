#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,res=INT_MAX;
        cin>>n>>m;
        vector<string> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int sum=0;
                for(int k=0;k<m;k++)
                {
                    sum+=abs(a[i][k]-a[j][k]);
                }
                res=min(sum,res);
            }
        }
        cout<<res<<endl;
    }
}