#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,m,n,d,cnt=0;
    cin>>k>>l>>m>>n>>d;
    if(k==1 || l==1 || m==1 || n==1)
    {
        cout<<d;
        return 0;
    }
    while(d)
    {
        if(d%k==0 || d%l==0 || d%m==0 || d%n==0)
        cnt++;
        d--;
    }
    cout<<cnt;
}