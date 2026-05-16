#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,sum=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            sum+=a;
        }
        if(sum==m)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}