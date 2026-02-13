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
        long long result=0;
        while(n>=1)
        {
            result+=n;
            n=n/2;
        }
        cout<<result<<endl;
    }
}