#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int maxi=max(a,max(b,c));
        int cnt=0;
        if(a==maxi)
        cnt++;
        if(b==maxi)
        cnt++;
        if(c==maxi)
        cnt++;
        if(cnt==1)
        {
            if(maxi!=a)
            cout<<maxi-a+1<<" ";
            else
            cout<<0<<" ";
            if(maxi!=b)
            cout<<maxi-b+1<<" ";
            else
            cout<<0<<" ";
            if(maxi!=c)
            cout<<maxi-c+1<<endl;
            else
            cout<<0<<endl;
        }
        else
        {
            maxi++;
            cout<<maxi-a<<" "<<maxi-b<<" "<<maxi-c<<endl;
        }
    }
}