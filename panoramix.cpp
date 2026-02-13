#include<bits/stdc++.h>
using namespace std;
bool prime(int k)
{
    for(int i=2;i<=sqrt(k);i++)
    {
        if(k%i==0)
        return false;
    }
    return true;
}
int main()
{
    int n,m,i;
    cin>>n>>m;
    if(!prime(m))
    {
        cout<<"NO";
        return 0;
    }
    for(i=n+1;i<m;i++)
    {
        if(prime(i) && i!=m)
        {
            cout<<"NO";
            break;
        }
    }
    if(i==m)
    cout<<"YES";
}