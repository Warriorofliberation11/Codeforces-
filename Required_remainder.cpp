#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        int rem=n%x;
        if(rem>=y)
        cout<<n-(rem-y)<<endl;
        else
        cout<<n-(rem+x-y)<<endl;
    }
}