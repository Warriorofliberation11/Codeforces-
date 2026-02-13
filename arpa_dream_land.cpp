#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n==0)
    {
        cout<<1;
        return 0;
    }
    int a=n%4;
    if(a==1)
    cout<<8;
    else if(a==2)
    cout<<4;
    else if(a==3)
    cout<<2;
    else
    cout<<6;
}