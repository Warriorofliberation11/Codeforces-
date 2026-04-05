#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int sum=0,i=1;
    while(i<=n)
    {
        sum+=i;
        if(sum-(n-i)==k)
        break;
        i++;
    }
    cout<<n-i<<endl;
}