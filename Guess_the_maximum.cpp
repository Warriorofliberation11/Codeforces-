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
        int prev,ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(i!=0)
            {
                int maxi=max(a,prev);
                ans=min(ans,maxi);
            }
            prev=a;
        }
        cout<<ans-1<<endl;
    }
}