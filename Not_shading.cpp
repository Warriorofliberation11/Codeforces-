#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,r,c;
        cin>>n>>m>>r>>c;
        vector<string> str(n);
        bool k=false;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>str[i];
            for(int j=0;j<m;j++)
            {
                if(str[i][j]=='B')
                {
                    cnt++;
                    if(i==r-1 || j==c-1)
                    k=true;
                }
            }
        }
        if(str[r-1][c-1]=='B')
        cout<<0<<endl;
        else if(cnt==0)
        cout<<-1<<endl;
        else if(k)
        cout<<1<<endl;
        else
        cout<<2<<endl;
    }
}