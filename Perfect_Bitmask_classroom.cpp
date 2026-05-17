#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x;
        cin>>x;
        int a=1;
        while((a&x)==0)
        {
            a=a<<1;
        }
        if((a^x)!=0)
        cout<<a<<endl;
        else
        {
            if(a==1)
            cout<<3<<endl;
            else
            cout<<(a^1)<<endl;
        }
    }
}