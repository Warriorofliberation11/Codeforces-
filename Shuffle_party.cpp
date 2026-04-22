#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a=1;
        while(a<=n)
        {
            a*=2;
        }
        cout<<a/2<<endl;
    }
}