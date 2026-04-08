#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,cnt=0;
        cin>>n>>k;
        if(k==1)
        {
            cout<<n<<endl;
            continue;
        }
        while(n>0)
        {
            cnt+=n%k;
            n=n/k;
        }
        cout<<cnt<<endl;
    }
}