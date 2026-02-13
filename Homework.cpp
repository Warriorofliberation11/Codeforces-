#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        string a,b,c;
        cin>>a;
        cin>>m;
        cin>>b>>c;
        for(int i=0;i<m;i++)
        {
            if(c[i]=='V')
            a=b[i]+a;
            else
            a+=b[i];
        }
        cout<<a<<endl;
    }
}