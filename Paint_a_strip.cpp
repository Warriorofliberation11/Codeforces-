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
        int ans=1,total=1;
        while(total<n)
        {
            total=(total+1)*2;
            ans++;
        }   
        cout<<ans<<endl;
    }
}