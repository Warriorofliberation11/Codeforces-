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
        long long prev=-1,ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            long long a;
            cin>>a;
            if(i!=0)
            ans=max(ans,prev*a);
            prev=a;
        }
        cout<<ans<<endl;
    }
}