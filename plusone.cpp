#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,maxi=INT_MIN,mini=INT_MAX;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            maxi=max(maxi,a);
            mini=min(mini,a);
        }
        cout<<maxi-mini<<endl;
    }
}