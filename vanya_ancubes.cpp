#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int res=0,i=1;
    while(res<n)
    {
        res+=(i*(i+1))/2;
        i++;
    }
    if(res==n)
    cout<<i-1<<endl;
    else
    cout<<i-2<<endl;
}