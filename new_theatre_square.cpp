#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        y=min(x*2,y);
        vector<string> arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int k=0,j=0;
            while(j<m)
            {
                while(j<m && arr[i][j]=='.')
                {
                    j++;
                }
                if(j!=k)
                {
                    int nos=j-k;
                    while(nos>1)
                    {
                        nos-=2;
                        sum+=y;
                    }
                    if(nos==1)
                    sum+=x;
                }
                k=++j;
            }
        }
        cout<<sum<<endl;
    }
}