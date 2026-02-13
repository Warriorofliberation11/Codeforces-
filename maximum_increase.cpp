#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int prev;
    cin>>prev;
    int ans=1,cnt=1;
    for(int i=1;i<n;i++)
    {
        int a;
        cin>>a;
        if(a>prev)
        cnt++;
        else 
        cnt=1;
        ans=max(ans,cnt);
        prev=a;
    }
    cout<<ans<<endl;
}