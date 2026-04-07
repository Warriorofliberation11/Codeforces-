#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
        {
            int t=a;
            a=b;
            b=a;
        }
        if(a!=1)
        cout<<1<<endl;
        else if(b==a+1)
        cout<<b+1<<endl;
        else
        cout<<a+1<<endl;
    }
}