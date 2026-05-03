#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        long long ans=(m*(m+1))/2;
        long long i=2,curr=m+m;
        while(i<=n)
        {
            ans+=curr;
            curr+=m;
            i++;
        }
        cout<<ans<<endl;
    }
}