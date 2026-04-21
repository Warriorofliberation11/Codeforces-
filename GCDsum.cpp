#include<bits/stdc++.h>
using namespace std;
long long sumofdigits(long long n)
{
    long long sum=0;
    while(n>0)
    {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        while(__gcd(n,sumofdigits(n))==1)
        {
            n++;
        }
        cout<<n<<endl;
    }
}