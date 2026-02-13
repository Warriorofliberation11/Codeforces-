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
        int even,odd;
        bool k=true;
        for(int i=1;i<=n;i++)
        {
            int a;
            cin>>a;
            if(i%2==1)
            {
                if(i==1)
                odd=a;
                else
                {
                    if(odd%2!=a%2)
                    k=false;
                }
            }
            else
            {
                if(i==2)
                even=a;
                else
                {
                    if(even%2!=a%2)
                    k=false;
                }
            }
        }
        if(k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}