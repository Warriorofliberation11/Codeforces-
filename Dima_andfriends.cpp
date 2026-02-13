#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        sum+=a;
    }
    int i=1,cnt=0;
    while(i<=5)
    {
        if((sum+i)%(n+1)!=1)
        cnt++;
        i++;
    }
    cout<<cnt<<endl;
}