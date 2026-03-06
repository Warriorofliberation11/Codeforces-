#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,k;
        cin>>a>>b>>k;
        long long ans=(k/2)*(a-b);
        if(k%2==1)
        ans+=a;
        cout<<ans<<endl;
    }
}