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
        string s;
        cin>>s;
        int o=0,z=0;
        if(s[0]=='1')
        o++;
        else
        z++;
        bool k=false;
        for(int i=1;i<n;i++)
        {
            if(s[i]=='1')
            o++;
            else
            z++;
            if(s[i]!=s[i-1])
            k=true;
        }
        if(k || z>o)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}