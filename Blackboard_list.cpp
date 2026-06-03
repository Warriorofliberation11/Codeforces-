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
        long long mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
            long long a;
            cin>>a;
            maxi=max(maxi,a);
            mini=min(mini,a);
        }
        if(mini<0)
        cout<<mini<<endl;
        else
        cout<<maxi<<endl;
    }
}