#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,c;
        cin>>s>>c;
        bool k=false;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]==c[0] && (i-0)%2==0 && (n-i-1)%2==0)
            k=true;
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}