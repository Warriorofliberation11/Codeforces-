#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        double a=sqrt(x*x+y*y);
        if(a==0)
        cout<<0<<endl;
        else if(a==(int)a)
        cout<<1<<endl;
        else
        cout<<2<<endl;
    }
}