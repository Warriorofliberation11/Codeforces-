#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        long long even=0;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            long long a;
            cin>>a;
            sum+=a;
            if(a%2==0)
            even++;
        }
        long long odd=n-even;
        for(int i=0;i<q;i++)
        {
            long long type,x;
            cin>>type>>x;
            if(type==1)
            {
                sum+=odd*x;
                if(x%2==1)
                {
                    even=n;
                    odd=0;
                }
            }
            else
            {
                sum+=even*x;
                if(x%2==1)
                {
                    odd=n;
                    even=0;
                }
            }
            cout<<sum<<endl;
        }
        cout<<sum<<endl;
    }
}