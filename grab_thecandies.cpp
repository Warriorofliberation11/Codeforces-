#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m=0,b=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a%2==0)
            m+=a;
            else
            b+=a;
        }
        if(m>b)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}