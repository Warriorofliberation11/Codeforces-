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
            b=t;
        }
        int x1=log2(3*a+1)/2,y1=log2(1.5*b+1)/2,x2=log2(3*b+1)/2,y2=log2(1.5*a+1)/2;
        int ans1,ans2;
        if(x1>y1)
        ans1=2*y1+1;
        else if(x1==y1)
        ans1=2*y1;
        else
        ans1=2*x1;
        if(x2>y2)
        ans2=2*y2+1;
        else if(x2==y2)
        ans2=2*y2;
        else
        ans2=2*x2;
        cout<<max(ans1,ans2)<<endl;
    }
}