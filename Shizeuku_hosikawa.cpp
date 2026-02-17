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
        if(n%2==1)
        cout<<0<<endl;
        else
        {
            int res=0;
            if(n%4==0)
            res++;
            while(n>0)
            {
                if(n%2==0)
                res++;
                n-=4;
            }
            cout<<res<<endl;
        }
    }
}