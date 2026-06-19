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
        int maxi=0,mini=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            maxi=max(maxi,a);
            mini=min(mini,a);
        }
        cout<<maxi+1-mini<<endl;
    }
}