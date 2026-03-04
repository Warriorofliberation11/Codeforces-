#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,x;
        cin>>n>>m>>x;
        long long i=(x-1)/n,j=(x-1)%n;
        cout<<j*m+i+1<<endl;
    }
}