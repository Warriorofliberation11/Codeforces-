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
        for(int i=0;i<n;i++)
        {
            cin>>g[i];
        }
        sort(g.begin(),g.end());
        bool k=true;
        for(int i=1;i<n;i++)
        {
            if(g[i]-g[i-1]>1)
            {
                k=false;
                cout<<"NO"<<endl;
                break;
            }
        }
        if(k)
        cout<<"YES"<<endl;
    }
}