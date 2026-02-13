#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,m;
        cin>>n>>s>>m;
        int prev=0;
        bool k=false;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            if(a-prev>=s)
            k=true;
            prev=b;
        }
        if(m-prev>=s)
        k=true;
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}