#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x,y,k;
        cin>>x>>y>>k;
        long long mul=k*(y+1)-1;
        cout<<(mul+x-2)/(long long)(x-1)+k<<endl;
    }
}