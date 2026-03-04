#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,q;
        cin>>n>>m>>q;
        int m1,m2,a;
        cin>>m1>>m2>>a;
        int t=max(m1,m2);
        m1=m1+m2-t;
        m2=t;
        if(m2<a)
        cout<<n-m2<<endl;
        else if(m1>a)
        cout<<m1-1<<endl;
        else 
        cout<<(m2-m1)/2<<endl;
    }
}