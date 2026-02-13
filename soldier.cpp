#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,result=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        result+=(k*i);
    }
    cout<<max(0,result-n);
}