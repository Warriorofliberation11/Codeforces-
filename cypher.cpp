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
        vector<int> initial(n);
        for(int i=0;i<n;i++)
        {
            cin>>initial[i];
        }
        for(int i=0;i<n;i++)
        {
            int m;
            cin>>m;
            string s;
            cin>>s;
            for(int j=0;j<m;j++)
            {
                if(s[j]=='D')
                initial[i]++;
                else
                initial[i]--;
                if(initial[i]==-1)
                initial[i]=9;
                else if(initial[i]==10)
                initial[i]=0;
            }
        }
        for(int i=0;i<n;i++)
        cout<<initial[i]<<" ";
        cout<<endl;
    }
}