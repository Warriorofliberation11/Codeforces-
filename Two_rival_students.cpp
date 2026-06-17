#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,a,b;
        cin>>n>>x>>a>>b;
        if(a>b)
        {
            int t=a;
            a=b;
            b=t;
        }
        int rem=n-b+a-1;
        if(x>=rem)
        cout<<n-1<<endl;
        else
        cout<<b-a+x<<endl;
    }
}