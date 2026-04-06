#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int fmin=min(a,b),fmax=max(a,b);
        int smin=min(c-a,d-b),smax=max(c-a,d-b);
        if(fmax>2*(fmin+1) || smax>2*(smin+1))
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}