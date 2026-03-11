#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,b,d;
        cin>>r>>b>>d;
        if(r>b)
        {
            int t=r;
            r=b;
            b=t;
        }
        if((d!=0 && (b+d)/(d+1)<=r) ||(d==0 && b==r))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}