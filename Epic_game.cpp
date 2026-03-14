#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    bool chance=true;
    while(n>=0)
    {
        if(chance)
        {
            int k=__gcd(a,n);
            if(k>n)
            {
                cout<<1<<endl;
                break;
            }
            else
            n-=k;
        }
        else
        {
            int k=__gcd(b,n);
            if(k>n)
            {
                cout<<0<<endl;
                break;
            }
            else
            n-=k;
        }
        chance=!chance;
    }
}