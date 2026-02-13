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
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            ans+=a;
        }
        if(ans==n)
        cout<<0<<endl;
        else if(ans<n)
        cout<<1<<endl;
        else
        cout<<ans-n<<endl;
    }
}