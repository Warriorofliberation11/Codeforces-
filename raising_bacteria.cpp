#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0,n;
    cin>>n;
    while(n>0)
    {
        if(n%2==1)
        cnt++;
        n=n/2;
    }
    cout<<cnt;
}