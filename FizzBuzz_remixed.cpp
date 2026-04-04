#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a=n/15;
        int cnt=a*3;
        int limit=a*15;
        if(limit<=n)
        cnt++;
        if(limit+1<=n)
        cnt++;
        if(limit+2<=n)
        cnt++;
        cout<<cnt<<endl;
    }
}