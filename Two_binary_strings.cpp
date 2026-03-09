#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int n=a.size();
        bool k=false;
        for(int i=0;i<n-1;i++)
        {
            if(a[i]==b[i] && a[i+1]==b[i+1] && a[i]=='0' && a[i+1]=='1')
            {
                k=true;
                break;
            }
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}