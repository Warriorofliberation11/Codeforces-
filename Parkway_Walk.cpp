#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            sum+=a;
        }
        if(m>=sum)
        cout<<0<<endl;
        else
        cout<<sum-m<<endl;
    }
}