#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ps=0;
        cin>>n;
        bool k=false;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            int v=sqrt(a);
            if(v*v!=a)
            k=true;
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}