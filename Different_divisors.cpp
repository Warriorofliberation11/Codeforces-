#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d;
        cin>>d;
        int first=d+1;
        while(!isprime(first))
        first++;
        int second=first+d;
        while(!isprime(second))
        second++;
        cout<<first*second<<endl;
    }
}