#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            cout<<-1<<endl;
            continue;
        }
        else if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        int i=2;
        while(i<=n-3)
        {
            cout<<i<<" "<<i-1<<" ";
            i+=2;
        }
        cout<<n<<" "<<n-2<<" "<<n-1<<endl;
    }
}