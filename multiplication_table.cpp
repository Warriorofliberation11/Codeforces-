#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,cnt=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
    {
        if(x/i<=n && x%i==0)
        cnt++;
    }
    cout<<cnt;
}