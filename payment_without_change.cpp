#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n,s;
        cin>>a>>b>>n>>s;
        long long total=a*n+b;
        if(total<s)
        cout<<"NO"<<endl;
        else if(total==s)
        cout<<"YES"<<endl;
        else
        { 
            long req=min(s/n,a);
            if(req*n<=s && req*n+b>=s)    
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
}