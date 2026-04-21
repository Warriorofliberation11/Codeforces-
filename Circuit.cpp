#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,one=0,zero=0;
        cin>>n;
        for(int i=0;i<2*n;i++)
        {
            int a;
            cin>>a;
            if(a==1)
            one++;
            else
            zero++;
        }
        if(one%2==1 && zero%2==1)
        cout<<1<<" ";
        else
        cout<<0<<" ";
        cout<<min(zero,one)<<endl;
    }
}