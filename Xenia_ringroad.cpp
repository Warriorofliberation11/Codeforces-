#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long curr=1,result=0;
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        if(a-curr)
        result+=(a-curr+n)%n;
        curr=a;
    }
    cout<<result;
}