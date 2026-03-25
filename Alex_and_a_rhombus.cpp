#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=1,k=4;
    for(int i=1;i<n;i++)
    {
        ans+=k;
        k+=4;
    }
    cout<<ans<<endl;
}