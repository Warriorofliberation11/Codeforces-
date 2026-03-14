#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            ans+=a;
        }
        cout<<(ans+n-1)/n<<endl;
    }
}