#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        long long ans=1;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            ans*=a;
        }
        if(2023%ans==0)
        {
            cout<<"YES"<<endl;
            cout<<2023/ans<<" ";
            for(int i=0;i<k-1;i++)
            {
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}