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
        vector<int> g(n);
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            cin>>g[i];
            if(i>0)
            mini=min(mini,g[i]-g[i-1]);
        }
        if(mini<0)
        cout<<0<<endl;
        else
        cout<<mini/2+1<<endl;
    }
}