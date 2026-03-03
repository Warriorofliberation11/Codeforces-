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
        int ans=(int)sqrt(n)+(int)cbrt(n)-(int)sqrt(cbrt(n));
        cout<<ans<<endl;
    }
}