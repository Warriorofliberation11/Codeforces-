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
        string a,b,c;
        cin>>a>>b>>c;
        bool k=true;
        for(int i=0;i<n;i++)
        {
            if((a[i]==b[i] && b[i]!=c[i]) || (a[i]!=b[i] && b[i]!=c[i] && c[i]!=a[i]))
            {
                k=false;
                break;
            }
        }
        if(k)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}