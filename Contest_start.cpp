#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin>>k;
    while(k--)
    {
        long long n,x,t;
        cin>>n>>x>>t;
        long long a=t/x,tm=max(0LL,n-a-1);
        cout<<a*tm+(min(a,n-1)*(min(a,n-1)+1))/2<<endl;
    }
}