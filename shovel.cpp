#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r;
    cin>>k>>r;
    int i=1;
    int a=(i*k)%10;
    while(r!=a && a!=0)
    {
        i++;
        a=(i*k)%10;
    }
    cout<<i;
}