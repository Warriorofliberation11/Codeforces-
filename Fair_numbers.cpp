#include<bits/stdc++.h>
using namespace std;
bool fair(long long n)
{
    long long m=n;
    while(m>0)
    {
        int r=m%10;
        if(r!=0)
        {
            if(n%r!=0)
            return false;
        }
        m=m/10;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        while(!fair(n))
        {
            n++;
        }
        cout<<n<<endl;
    }
}