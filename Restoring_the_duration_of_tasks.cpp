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
        vector<int> s(n),f(n);
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>f[i];
        }
        int curr=0;
        for(int i=0;i<n;i++)
        {
            cout<<f[i]-max(s[i],curr)<<" ";
            curr=f[i];
        }
        cout<<endl;
    }
}