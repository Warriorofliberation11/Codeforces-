#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int remaining= 240-k;
    if(remaining<5)
    {
        cout<<0<<endl;
        return 0;
    }
    while(5*n*(n+1)/2>remaining)
    {
        n--;
    }
    cout<<n;
}