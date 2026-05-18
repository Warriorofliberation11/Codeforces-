#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long p,a,b,c;
        cin>>p>>a>>b>>c;
        long long x=(a-p%a)%a,y=(b-p%b)%b,z=(c-p%c)%c;
        cout<<min({x,y,z})<<endl;
    }
}