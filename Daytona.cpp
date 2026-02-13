#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        bool c=false;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a==k)
            c=true;
        }
        if(c)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}