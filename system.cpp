#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int cnt=0;
    if(n<m)
    {
        for(int i=0;i<=sqrt(n);i++)
        {
            int b=n-pow(i,2);
            if(i+pow(b,2)==m)
            cnt++;
        }
    }
    else
    {
        for(int i=0;i<=sqrt(m);i++)
        {
            int a=m-pow(i,2);
            if(i+pow(a,2)==n)
            cnt++;
        }
    }
    cout<<cnt<<endl;
}