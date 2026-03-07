#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int mini=min(k2,min(k5,k6));
    long long sum=mini*256;
    k2-=mini;
    sum+=min(k2,k3)*32;
    cout<<sum<<endl;
}