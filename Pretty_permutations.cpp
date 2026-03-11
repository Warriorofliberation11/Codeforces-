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
            for(int i=2;i<=n;i+=2)
            {
                cout<<i<<" "<<i-1<<" ";
            }
            cout<<endl;
        }
        else
        {
            for(int i=2;i<n-2;i+=2)
            {
                cout<<i<<" "<<i-1<<" ";
            }
            cout<<n<<" ";
            if(n!=2)
            cout<<n-2<<" ";
            cout<<n-1<<endl;
        }
    }
}