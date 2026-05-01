#include<bits/stdc++.h>
using namespace std;
bool composite(int m)
{
    for(int i=2;i<=sqrt(m);i++)
    {
        if(m%i==0)
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    if(n%2==0)
    cout<<n+4<<" "<<4<<endl;
    else
    {
        long long i=4;
        while(!composite(n+i))
        {
            i+=2;
        }
        cout<<n+i<<" "<<i<<endl;
    }
}