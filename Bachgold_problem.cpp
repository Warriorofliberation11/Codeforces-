#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,two=0;
    cin>>n;
    while(n>0 && n!=3)
    {
        two++;
        n-=2;
    }
    int ans=two;
    if(n==3)
    ans++;
    cout<<ans<<endl;
    for(int i=0;i<two;i++)
    {
        cout<<2<<" ";
    }
    if(n==3)
    cout<<3;
}