#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,e=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a%2==0)
            e++;
        }
        int o=n-e;
        if(e>0)
        cout<<1+o<<endl;
        else
        cout<<o-1<<endl;
    }
}