#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long n,a,b;
        cin>>n>>a>>b;
        int sum=0;
        if(n%2==1)
        sum+=a,n--;
        cout<<sum+min(a*n,n/2*b)<<endl;
    }
}