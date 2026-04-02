#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    vector<long long> prefix(n,0);
    for(int i=0;i<n;i++)
    {
        prefix[i]=(s[i]-'a'+1);
        if(i>0)
        prefix[i]+=prefix[i-1];
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        long long ans=prefix[r-1];
        if(l!=1)
        ans-=prefix[l-2];
        cout<<ans<<endl;
    }
}