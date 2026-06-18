#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n,m;
    cin>>n>>m;
    int sum=0;
    for(int i=1;i<=n;i++)
    sum+=i;
    m=m%sum;
    for(int i=1;i<=n;i++)
    {
        if(i>m)
        break;
        m-=i;
    }
    cout<<m<<endl;
}