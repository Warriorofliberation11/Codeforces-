#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,k,cnt;
        cin>>l>>r>>k;
        if(l==r)
        {
            if(l==1)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
        else
        {
            if(l%2==0 && r%2==0)
            cnt=(r-l)/2;
            else if(l%2 && r%2)
            cnt=(r-l)/2+1;
            else
            cnt=(r-l+1)/2;
            if(cnt<=k)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
}