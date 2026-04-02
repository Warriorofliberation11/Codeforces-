#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool k=false,check=true;
        int n=s.size();
        for(int i=1;i<n;i++)
        {
            if(s[i]=='1' && s[i-1]=='1')
            k=true;
            if(s[i]=='0' && s[i-1]=='0'&& k)
            check=false;
        }
        if(check)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}